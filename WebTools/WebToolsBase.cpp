//////////////////////////////////////////////////////////////////////
// This file was auto-generated by codelite's wxCrafter Plugin
// wxCrafter project file: WebToolsBase.wxcp
// Do not modify this file by hand!
//////////////////////////////////////////////////////////////////////

#include "WebToolsBase.h"

// Declare the bitmap loading function
extern void wxCD9C6InitBitmapResources();

static bool bBitmapLoaded = false;

WebToolsSettingsBase::WebToolsSettingsBase(wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos,
                                           const wxSize& size, long style)
    : wxDialog(parent, id, title, pos, size, style)
{
    if(!bBitmapLoaded) {
        // We need to initialise the default bitmap handler
        wxXmlResource::Get()->AddHandler(new wxBitmapXmlHandler);
        wxCD9C6InitBitmapResources();
        bBitmapLoaded = true;
    }

    wxBoxSizer* boxSizer2 = new wxBoxSizer(wxVERTICAL);
    this->SetSizer(boxSizer2);

    m_notebook10 = new wxNotebook(this, wxID_ANY, wxDefaultPosition, wxDLG_UNIT(this, wxSize(-1, -1)), wxBK_DEFAULT);
    m_notebook10->SetName(wxT("m_notebook10"));

    boxSizer2->Add(m_notebook10, 1, wxALL | wxEXPAND, WXC_FROM_DIP(5));

    m_panel56 = new wxPanel(m_notebook10, wxID_ANY, wxDefaultPosition, wxDLG_UNIT(m_notebook10, wxSize(-1, -1)),
                            wxTAB_TRAVERSAL);
    m_notebook10->AddPage(m_panel56, _("Code Completion"), true);

    wxBoxSizer* boxSizer58 = new wxBoxSizer(wxVERTICAL);
    m_panel56->SetSizer(boxSizer58);

    m_checkBoxEnableJsCC = new wxCheckBox(m_panel56, wxID_ANY, _("Enable JavaScript code completion"),
                                          wxDefaultPosition, wxDLG_UNIT(m_panel56, wxSize(-1, -1)), 0);
    m_checkBoxEnableJsCC->SetValue(true);
    m_checkBoxEnableJsCC->SetToolTip(_("Enable JavaScript code completion"));

    boxSizer58->Add(m_checkBoxEnableJsCC, 0, wxALL, WXC_FROM_DIP(5));

    m_checkBoxEnableXmlCC = new wxCheckBox(m_panel56, wxID_ANY, _("Enable XML code completion"), wxDefaultPosition,
                                           wxDLG_UNIT(m_panel56, wxSize(-1, -1)), 0);
    m_checkBoxEnableXmlCC->SetValue(true);
    m_checkBoxEnableXmlCC->SetToolTip(_("Enable XML code completion"));

    boxSizer58->Add(m_checkBoxEnableXmlCC, 0, wxALL, WXC_FROM_DIP(5));

    m_checkBoxEnableHtmlCC = new wxCheckBox(m_panel56, wxID_ANY, _("Enable HTML code completion"), wxDefaultPosition,
                                            wxDLG_UNIT(m_panel56, wxSize(-1, -1)), 0);
    m_checkBoxEnableHtmlCC->SetValue(true);
    m_checkBoxEnableHtmlCC->SetToolTip(_("Enable HTML code completion"));

    boxSizer58->Add(m_checkBoxEnableHtmlCC, 0, wxALL, WXC_FROM_DIP(5));

    m_panel12 = new wxPanel(m_notebook10, wxID_ANY, wxDefaultPosition, wxDLG_UNIT(m_notebook10, wxSize(-1, -1)),
                            wxTAB_TRAVERSAL);
    m_notebook10->AddPage(m_panel12, _("JavaScript"), false);

    wxBoxSizer* boxSizer22 = new wxBoxSizer(wxVERTICAL);
    m_panel12->SetSizer(boxSizer22);

    wxArrayString m_pgMgrArr;
    wxUnusedVar(m_pgMgrArr);
    wxArrayInt m_pgMgrIntArr;
    wxUnusedVar(m_pgMgrIntArr);
    m_pgMgr = new wxPropertyGridManager(m_panel12, wxID_ANY, wxDefaultPosition, wxDLG_UNIT(m_panel12, wxSize(-1, -1)),
                                        wxPG_DESCRIPTION | wxPG_SPLITTER_AUTO_CENTER | wxPG_BOLD_MODIFIED);

    boxSizer22->Add(m_pgMgr, 1, wxALL | wxEXPAND, WXC_FROM_DIP(5));

    m_pgProp26 = m_pgMgr->Append(new wxPropertyCategory(_("General")));
    m_pgProp26->SetHelpString(wxT(""));

    m_pgPropLogging = m_pgMgr->AppendIn(m_pgProp26, new wxBoolProperty(_("Verbose Logging"), wxPG_LABEL, 1));
    m_pgPropLogging->SetHelpString(
        _("The JavaScript code completion uses the \"tern\" engine.\nCheck this option to start tern in verbose mode"));

    m_pgProp32 = m_pgMgr->Append(new wxPropertyCategory(_("Libraries")));
    m_pgProp32->SetHelpString(_("Enable Code Completion for the selected libraries"));

    m_pgPropEcma5 = m_pgMgr->AppendIn(m_pgProp32, new wxBoolProperty(_("Ecma5"), wxPG_LABEL, 1));
    m_pgPropEcma5->SetHelpString(wxT(""));

    m_pgPropEcma6 = m_pgMgr->AppendIn(m_pgProp32, new wxBoolProperty(_("Ecma6"), wxPG_LABEL, 1));
    m_pgPropEcma6->SetHelpString(wxT(""));

    m_pgPropJQuery = m_pgMgr->AppendIn(m_pgProp32, new wxBoolProperty(_("jQuery"), wxPG_LABEL, 1));
    m_pgPropJQuery->SetHelpString(_("Support Code Completion for jQuery framework"));

    m_pgPropUnderscore = m_pgMgr->AppendIn(m_pgProp32, new wxBoolProperty(_("Underscore"), wxPG_LABEL, 1));
    m_pgPropUnderscore->SetHelpString(_("Enable code completion for the Underscore library"));

    m_pgPropBrowser = m_pgMgr->AppendIn(m_pgProp32, new wxBoolProperty(_("Browser"), wxPG_LABEL, 1));
    m_pgPropBrowser->SetHelpString(_("Enable code completion for browser mode (DOM, document, window etc)"));

    m_pgPropChai = m_pgMgr->AppendIn(m_pgProp32, new wxBoolProperty(_("Chai"), wxPG_LABEL, 1));
    m_pgPropChai->SetHelpString(_("Enable code completion for the chain assertion library"));

    m_pgPropQML = m_pgMgr->AppendIn(m_pgProp32, new wxBoolProperty(_("QML"), wxPG_LABEL, 1));
    m_pgPropQML->SetHelpString(_("Support for Qt's QML extension for JavaScript"));

    m_pgProp46 = m_pgMgr->Append(new wxPropertyCategory(_("Plugins")));
    m_pgProp46->SetHelpString(wxT(""));

    m_pgPropAngular = m_pgMgr->AppendIn(m_pgProp46, new wxBoolProperty(_("Angular"), wxPG_LABEL, 1));
    m_pgPropAngular->SetHelpString(
        _("Adds the angular object to the top-level environment, and tries to wire up some of the bizarre dependency "
          "management scheme from this library, so that dependency injections get the right types"));

    m_pgPropStrings = m_pgMgr->AppendIn(m_pgProp46, new wxBoolProperty(_("Strings"), wxPG_LABEL, 1));
    m_pgPropStrings->SetHelpString(
        _("When enabled, this plugin will gather (short) strings in your code, and completing when inside a string "
          "will try to complete to previously seen strings"));

    m_pgPropNode = m_pgMgr->AppendIn(m_pgProp46, new wxBoolProperty(_("Node.js"), wxPG_LABEL, 1));
    m_pgPropNode->SetHelpString(
        _("Provides variables that are part of the node environment, such as process and require, and hooks up require "
          "to try and find the dependencies that are being loaded, and assign them the correct types. It also includes "
          "types for the built-in modules that node.js provides (\"fs\", \"http\", etc)"));

    m_pgPropNodeExpress = m_pgMgr->AppendIn(m_pgProp46, new wxBoolProperty(_("Node Express"), wxPG_LABEL, 1));
    m_pgPropNodeExpress->SetHelpString(
        _("A Tern plugin adding support for express web application framework for node. http://expressjs.com/"));

    m_pgPropWebPack = m_pgMgr->AppendIn(m_pgProp46, new wxBoolProperty(_("WebPack"), wxPG_LABEL, 1));
    m_pgPropWebPack->SetHelpString(_("Support WebPack"));

    m_pgPropRequireJS = m_pgMgr->AppendIn(m_pgProp46, new wxBoolProperty(_("RequireJS"), wxPG_LABEL, 1));
    m_pgPropRequireJS->SetHelpString(
        _("This plugin (\"requirejs\") teaches the server to understand RequireJS-style dependency management. It "
          "defines the global functions define and requirejs, and will do its best to resolve dependencies and give "
          "them their proper types"));

    m_panel237 = new wxPanel(m_notebook10, wxID_ANY, wxDefaultPosition, wxDLG_UNIT(m_notebook10, wxSize(-1, -1)),
                             wxTAB_TRAVERSAL);
    m_notebook10->AddPage(m_panel237, _("Node.js"), false);

    wxBoxSizer* boxSizer239 = new wxBoxSizer(wxVERTICAL);
    m_panel237->SetSizer(boxSizer239);

    wxFlexGridSizer* flexGridSizer241 = new wxFlexGridSizer(0, 2, 0, 0);
    flexGridSizer241->SetFlexibleDirection(wxBOTH);
    flexGridSizer241->SetNonFlexibleGrowMode(wxFLEX_GROWMODE_SPECIFIED);
    flexGridSizer241->AddGrowableCol(1);

    boxSizer239->Add(flexGridSizer241, 1, wxALL | wxEXPAND, WXC_FROM_DIP(5));

    m_staticText243 = new wxStaticText(m_panel237, wxID_ANY, _("nodejs path:"), wxDefaultPosition,
                                       wxDLG_UNIT(m_panel237, wxSize(-1, -1)), 0);

    flexGridSizer241->Add(m_staticText243, 0, wxALL | wxALIGN_RIGHT | wxALIGN_CENTER_VERTICAL, WXC_FROM_DIP(5));

    m_filePickerNodeJS = new wxFilePickerCtrl(m_panel237, wxID_ANY, wxEmptyString, _("Select a file"), wxT("*"),
                                              wxDefaultPosition, wxDLG_UNIT(m_panel237, wxSize(-1, -1)),
                                              wxFLP_DEFAULT_STYLE | wxFLP_USE_TEXTCTRL | wxFLP_SMALL);
    m_filePickerNodeJS->SetToolTip(_("Set the path to Node.js executable"));
    m_filePickerNodeJS->SetFocus();

    flexGridSizer241->Add(m_filePickerNodeJS, 0, wxALL | wxEXPAND, WXC_FROM_DIP(5));

    m_staticText247 = new wxStaticText(m_panel237, wxID_ANY, _("npm path:"), wxDefaultPosition,
                                       wxDLG_UNIT(m_panel237, wxSize(-1, -1)), 0);

    flexGridSizer241->Add(m_staticText247, 0, wxALL | wxALIGN_RIGHT | wxALIGN_CENTER_VERTICAL, WXC_FROM_DIP(5));

    m_filePickerNpm = new wxFilePickerCtrl(m_panel237, wxID_ANY, wxEmptyString, _("Select a file"), wxT("*"),
                                           wxDefaultPosition, wxDLG_UNIT(m_panel237, wxSize(-1, -1)),
                                           wxFLP_DEFAULT_STYLE | wxFLP_USE_TEXTCTRL | wxFLP_SMALL);
    m_filePickerNpm->SetToolTip(_("Set the path to npm executable"));

    flexGridSizer241->Add(m_filePickerNpm, 0, wxALL | wxEXPAND, WXC_FROM_DIP(5));

    flexGridSizer241->Add(0, 0, 1, wxALL, WXC_FROM_DIP(5));

    m_buttonSuugest = new wxButton(m_panel237, wxID_ANY, _("Suggest..."), wxDefaultPosition,
                                   wxDLG_UNIT(m_panel237, wxSize(-1, -1)), 0);
    m_buttonSuugest->SetToolTip(_("Auto detect Node.js & npm binaries"));

    flexGridSizer241->Add(m_buttonSuugest, 0, wxALL | wxEXPAND, WXC_FROM_DIP(5));

    m_stdBtnSizer4 = new wxStdDialogButtonSizer();

    boxSizer2->Add(m_stdBtnSizer4, 0, wxALL | wxALIGN_CENTER_HORIZONTAL, WXC_FROM_DIP(10));

    m_buttonCancel = new wxButton(this, wxID_CANCEL, wxT(""), wxDefaultPosition, wxDLG_UNIT(this, wxSize(-1, -1)), 0);
    m_stdBtnSizer4->AddButton(m_buttonCancel);

    m_buttonOK = new wxButton(this, wxID_OK, wxT(""), wxDefaultPosition, wxDLG_UNIT(this, wxSize(-1, -1)), 0);
    m_buttonOK->SetDefault();
    m_stdBtnSizer4->AddButton(m_buttonOK);

    m_buttonApply = new wxButton(this, wxID_APPLY, wxT(""), wxDefaultPosition, wxDLG_UNIT(this, wxSize(-1, -1)), 0);
    m_stdBtnSizer4->AddButton(m_buttonApply);
    m_stdBtnSizer4->Realize();

#if wxVERSION_NUMBER >= 2900
    if(!wxPersistenceManager::Get().Find(m_notebook10)) {
        wxPersistenceManager::Get().RegisterAndRestore(m_notebook10);
    } else {
        wxPersistenceManager::Get().Restore(m_notebook10);
    }
#endif

    SetName(wxT("WebToolsSettingsBase"));
    SetSize(wxDLG_UNIT(this, wxSize(500, 300)));
    if(GetSizer()) { GetSizer()->Fit(this); }
    if(GetParent()) {
        CentreOnParent(wxBOTH);
    } else {
        CentreOnScreen(wxBOTH);
    }
#if wxVERSION_NUMBER >= 2900
    if(!wxPersistenceManager::Get().Find(this)) {
        wxPersistenceManager::Get().RegisterAndRestore(this);
    } else {
        wxPersistenceManager::Get().Restore(this);
    }
#endif
    // Connect events
    m_checkBoxEnableJsCC->Connect(wxEVT_COMMAND_CHECKBOX_CLICKED,
                                  wxCommandEventHandler(WebToolsSettingsBase::OnModified), NULL, this);
    m_checkBoxEnableXmlCC->Connect(wxEVT_COMMAND_CHECKBOX_CLICKED,
                                   wxCommandEventHandler(WebToolsSettingsBase::OnModified), NULL, this);
    m_checkBoxEnableHtmlCC->Connect(wxEVT_COMMAND_CHECKBOX_CLICKED,
                                    wxCommandEventHandler(WebToolsSettingsBase::OnModified), NULL, this);
    m_pgMgr->Connect(wxEVT_PG_CHANGED, wxPropertyGridEventHandler(WebToolsSettingsBase::OnJSValueChanged), NULL, this);
    m_filePickerNodeJS->Connect(wxEVT_COMMAND_FILEPICKER_CHANGED,
                                wxFileDirPickerEventHandler(WebToolsSettingsBase::OnNodejsPath), NULL, this);
    m_filePickerNpm->Connect(wxEVT_COMMAND_FILEPICKER_CHANGED,
                             wxFileDirPickerEventHandler(WebToolsSettingsBase::OnNpmPath), NULL, this);
    m_buttonSuugest->Connect(wxEVT_COMMAND_BUTTON_CLICKED,
                             wxCommandEventHandler(WebToolsSettingsBase::OnSuggestNodeJSPaths), NULL, this);
    m_buttonOK->Connect(wxEVT_UPDATE_UI, wxUpdateUIEventHandler(WebToolsSettingsBase::OnOKUI), NULL, this);
    m_buttonOK->Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(WebToolsSettingsBase::OnOK), NULL, this);
    m_buttonApply->Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(WebToolsSettingsBase::OnApply), NULL,
                           this);
    m_buttonApply->Connect(wxEVT_UPDATE_UI, wxUpdateUIEventHandler(WebToolsSettingsBase::OnOKUI), NULL, this);
}

WebToolsSettingsBase::~WebToolsSettingsBase()
{
    m_checkBoxEnableJsCC->Disconnect(wxEVT_COMMAND_CHECKBOX_CLICKED,
                                     wxCommandEventHandler(WebToolsSettingsBase::OnModified), NULL, this);
    m_checkBoxEnableXmlCC->Disconnect(wxEVT_COMMAND_CHECKBOX_CLICKED,
                                      wxCommandEventHandler(WebToolsSettingsBase::OnModified), NULL, this);
    m_checkBoxEnableHtmlCC->Disconnect(wxEVT_COMMAND_CHECKBOX_CLICKED,
                                       wxCommandEventHandler(WebToolsSettingsBase::OnModified), NULL, this);
    m_pgMgr->Disconnect(wxEVT_PG_CHANGED, wxPropertyGridEventHandler(WebToolsSettingsBase::OnJSValueChanged), NULL,
                        this);
    m_filePickerNodeJS->Disconnect(wxEVT_COMMAND_FILEPICKER_CHANGED,
                                   wxFileDirPickerEventHandler(WebToolsSettingsBase::OnNodejsPath), NULL, this);
    m_filePickerNpm->Disconnect(wxEVT_COMMAND_FILEPICKER_CHANGED,
                                wxFileDirPickerEventHandler(WebToolsSettingsBase::OnNpmPath), NULL, this);
    m_buttonSuugest->Disconnect(wxEVT_COMMAND_BUTTON_CLICKED,
                                wxCommandEventHandler(WebToolsSettingsBase::OnSuggestNodeJSPaths), NULL, this);
    m_buttonOK->Disconnect(wxEVT_UPDATE_UI, wxUpdateUIEventHandler(WebToolsSettingsBase::OnOKUI), NULL, this);
    m_buttonOK->Disconnect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(WebToolsSettingsBase::OnOK), NULL, this);
    m_buttonApply->Disconnect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(WebToolsSettingsBase::OnApply), NULL,
                              this);
    m_buttonApply->Disconnect(wxEVT_UPDATE_UI, wxUpdateUIEventHandler(WebToolsSettingsBase::OnOKUI), NULL, this);
}

NodeJSDebuggerDlgBase::NodeJSDebuggerDlgBase(wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos,
                                             const wxSize& size, long style)
    : wxDialog(parent, id, title, pos, size, style)
{
    if(!bBitmapLoaded) {
        // We need to initialise the default bitmap handler
        wxXmlResource::Get()->AddHandler(new wxBitmapXmlHandler);
        wxCD9C6InitBitmapResources();
        bBitmapLoaded = true;
    }
    // Set icon(s) to the application/dialog
    wxIconBundle app_icons;
    {
        wxBitmap iconBmp = wxXmlResource::Get()->LoadBitmap(wxT("nodejs"));
        wxIcon icn;
        icn.CopyFromBitmap(iconBmp);
        app_icons.AddIcon(icn);
    }
    {
        wxBitmap iconBmp = wxXmlResource::Get()->LoadBitmap(wxT("nodejs-32"));
        wxIcon icn;
        icn.CopyFromBitmap(iconBmp);
        app_icons.AddIcon(icn);
    }
    SetIcons(app_icons);

    wxBoxSizer* boxSizer68 = new wxBoxSizer(wxVERTICAL);
    this->SetSizer(boxSizer68);

    wxFlexGridSizer* flexGridSizer76 = new wxFlexGridSizer(0, 2, 0, 0);
    flexGridSizer76->SetFlexibleDirection(wxBOTH);
    flexGridSizer76->SetNonFlexibleGrowMode(wxFLEX_GROWMODE_SPECIFIED);
    flexGridSizer76->AddGrowableCol(1);

    boxSizer68->Add(flexGridSizer76, 0, wxALL | wxEXPAND, WXC_FROM_DIP(5));

    m_staticText78 = new wxStaticText(this, wxID_ANY, _("Node.js executable:"), wxDefaultPosition,
                                      wxDLG_UNIT(this, wxSize(-1, -1)), 0);

    flexGridSizer76->Add(m_staticText78, 0, wxALL | wxALIGN_RIGHT | wxALIGN_CENTER_VERTICAL, WXC_FROM_DIP(5));

    m_filePickerNodeJS =
        new wxFilePickerCtrl(this, wxID_ANY, wxEmptyString, _("Select a file"), wxT("*"), wxDefaultPosition,
                             wxDLG_UNIT(this, wxSize(-1, -1)), wxFLP_DEFAULT_STYLE | wxFLP_USE_TEXTCTRL | wxFLP_SMALL);
    m_filePickerNodeJS->SetToolTip(_("Select Node.js executable"));
    m_filePickerNodeJS->SetFocus();

    flexGridSizer76->Add(m_filePickerNodeJS, 0, wxALL | wxEXPAND, WXC_FROM_DIP(5));

    m_staticTextScript =
        new wxStaticText(this, wxID_ANY, _("Script to debug:"), wxDefaultPosition, wxDLG_UNIT(this, wxSize(-1, -1)), 0);

    flexGridSizer76->Add(m_staticTextScript, 0, wxALL | wxALIGN_RIGHT | wxALIGN_CENTER_VERTICAL, WXC_FROM_DIP(5));

    m_filePickerScript =
        new wxFilePickerCtrl(this, wxID_ANY, wxEmptyString, _("Select a file"), wxT("*"), wxDefaultPosition,
                             wxDLG_UNIT(this, wxSize(-1, -1)), wxFLP_DEFAULT_STYLE | wxFLP_USE_TEXTCTRL | wxFLP_SMALL);
    m_filePickerScript->SetToolTip(_("Select the script to execute"));

    flexGridSizer76->Add(m_filePickerScript, 0, wxALL | wxEXPAND, WXC_FROM_DIP(5));

    m_staticText257 = new wxStaticText(this, wxID_ANY, _("Working directory:"), wxDefaultPosition,
                                       wxDLG_UNIT(this, wxSize(-1, -1)), 0);

    flexGridSizer76->Add(m_staticText257, 0, wxALL | wxALIGN_RIGHT | wxALIGN_CENTER_VERTICAL, WXC_FROM_DIP(5));

    m_dirPickerWorkingDirectory = new wxDirPickerCtrl(this, wxID_ANY, wxEmptyString, _("Select a folder"),
                                                      wxDefaultPosition, wxDLG_UNIT(this, wxSize(-1, -1)),
                                                      wxDIRP_SMALL | wxDIRP_DEFAULT_STYLE | wxDIRP_USE_TEXTCTRL);

    flexGridSizer76->Add(m_dirPickerWorkingDirectory, 0, wxALL | wxEXPAND, WXC_FROM_DIP(5));

    m_staticTextDebuggerPort =
        new wxStaticText(this, wxID_ANY, _("Debugger port:"), wxDefaultPosition, wxDLG_UNIT(this, wxSize(-1, -1)), 0);

    flexGridSizer76->Add(m_staticTextDebuggerPort, 0, wxALL | wxALIGN_RIGHT | wxALIGN_CENTER_VERTICAL, WXC_FROM_DIP(5));

    m_textCtrlPort =
        new wxTextCtrl(this, wxID_ANY, wxT("5858"), wxDefaultPosition, wxDLG_UNIT(this, wxSize(-1, -1)), 0);
#if wxVERSION_NUMBER >= 3000
    m_textCtrlPort->SetHint(wxT(""));
#endif

    flexGridSizer76->Add(m_textCtrlPort, 0, wxALL | wxEXPAND, WXC_FROM_DIP(5));

    m_staticText132 = new wxStaticText(this, wxID_ANY, _("Command line arguments:"), wxDefaultPosition,
                                       wxDLG_UNIT(this, wxSize(-1, -1)), 0);

    boxSizer68->Add(m_staticText132, 0, wxALL, WXC_FROM_DIP(5));

    m_stcCommandLineArguments =
        new wxStyledTextCtrl(this, wxID_ANY, wxDefaultPosition, wxDLG_UNIT(this, wxSize(-1, -1)), 0);
    m_stcCommandLineArguments->SetToolTip(
        _("Pass command line arguments to Node.js\nPlace each argument on its own line"));
    // Configure the fold margin
    m_stcCommandLineArguments->SetMarginType(4, wxSTC_MARGIN_SYMBOL);
    m_stcCommandLineArguments->SetMarginMask(4, wxSTC_MASK_FOLDERS);
    m_stcCommandLineArguments->SetMarginSensitive(4, true);
    m_stcCommandLineArguments->SetMarginWidth(4, 0);

    // Configure the tracker margin
    m_stcCommandLineArguments->SetMarginWidth(1, 0);

    // Configure the symbol margin
    m_stcCommandLineArguments->SetMarginType(2, wxSTC_MARGIN_SYMBOL);
    m_stcCommandLineArguments->SetMarginMask(2, ~(wxSTC_MASK_FOLDERS));
    m_stcCommandLineArguments->SetMarginWidth(2, 0);
    m_stcCommandLineArguments->SetMarginSensitive(2, true);

    // Configure the line numbers margin
    m_stcCommandLineArguments->SetMarginType(0, wxSTC_MARGIN_NUMBER);
    m_stcCommandLineArguments->SetMarginWidth(0, 0);

    // Configure the line symbol margin
    m_stcCommandLineArguments->SetMarginType(3, wxSTC_MARGIN_FORE);
    m_stcCommandLineArguments->SetMarginMask(3, 0);
    m_stcCommandLineArguments->SetMarginWidth(3, 0);
    // Select the lexer
    m_stcCommandLineArguments->SetLexer(wxSTC_LEX_NULL);
    // Set default font / styles
    m_stcCommandLineArguments->StyleClearAll();
    m_stcCommandLineArguments->SetWrapMode(0);
    m_stcCommandLineArguments->SetIndentationGuides(0);
    m_stcCommandLineArguments->SetKeyWords(0, wxT(""));
    m_stcCommandLineArguments->SetKeyWords(1, wxT(""));
    m_stcCommandLineArguments->SetKeyWords(2, wxT(""));
    m_stcCommandLineArguments->SetKeyWords(3, wxT(""));
    m_stcCommandLineArguments->SetKeyWords(4, wxT(""));

    boxSizer68->Add(m_stcCommandLineArguments, 1, wxALL | wxEXPAND, WXC_FROM_DIP(5));

    m_stdBtnSizer70 = new wxStdDialogButtonSizer();

    boxSizer68->Add(m_stdBtnSizer70, 0, wxALL | wxALIGN_CENTER_HORIZONTAL, WXC_FROM_DIP(10));

    m_buttonOK = new wxButton(this, wxID_OK, wxT(""), wxDefaultPosition, wxDLG_UNIT(this, wxSize(-1, -1)), 0);
    m_buttonOK->SetDefault();
    m_stdBtnSizer70->AddButton(m_buttonOK);

    m_button74 = new wxButton(this, wxID_CANCEL, wxT(""), wxDefaultPosition, wxDLG_UNIT(this, wxSize(-1, -1)), 0);
    m_stdBtnSizer70->AddButton(m_button74);
    m_stdBtnSizer70->Realize();

    SetName(wxT("NodeJSDebuggerDlgBase"));
    SetSize(wxDLG_UNIT(this, wxSize(-1, -1)));
    if(GetSizer()) { GetSizer()->Fit(this); }
    if(GetParent()) {
        CentreOnParent(wxBOTH);
    } else {
        CentreOnScreen(wxBOTH);
    }
#if wxVERSION_NUMBER >= 2900
    if(!wxPersistenceManager::Get().Find(this)) {
        wxPersistenceManager::Get().RegisterAndRestore(this);
    } else {
        wxPersistenceManager::Get().Restore(this);
    }
#endif
    // Connect events
    m_buttonOK->Connect(wxEVT_UPDATE_UI, wxUpdateUIEventHandler(NodeJSDebuggerDlgBase::OnOKUI), NULL, this);
}

NodeJSDebuggerDlgBase::~NodeJSDebuggerDlgBase()
{
    m_buttonOK->Disconnect(wxEVT_UPDATE_UI, wxUpdateUIEventHandler(NodeJSDebuggerDlgBase::OnOKUI), NULL, this);
}

NodeJSDebuggerPaneBase::NodeJSDebuggerPaneBase(wxWindow* parent, wxWindowID id, const wxPoint& pos, const wxSize& size,
                                               long style)
    : wxPanel(parent, id, pos, size, style)
{
    if(!bBitmapLoaded) {
        // We need to initialise the default bitmap handler
        wxXmlResource::Get()->AddHandler(new wxBitmapXmlHandler);
        wxCD9C6InitBitmapResources();
        bBitmapLoaded = true;
    }

    wxBoxSizer* boxSizer88 = new wxBoxSizer(wxVERTICAL);
    this->SetSizer(boxSizer88);

    m_splitter104 =
        new wxSplitterWindow(this, wxID_ANY, wxDefaultPosition, wxDLG_UNIT(this, wxSize(-1, -1)), wxSP_LIVE_UPDATE);
    m_splitter104->SetSashGravity(0.33);
    m_splitter104->SetMinimumPaneSize(10);

    boxSizer88->Add(m_splitter104, 1, wxALL | wxEXPAND, WXC_FROM_DIP(0));

    m_splitterPage112 = new wxPanel(m_splitter104, wxID_ANY, wxDefaultPosition,
                                    wxDLG_UNIT(m_splitter104, wxSize(-1, -1)), wxTAB_TRAVERSAL);

    wxBoxSizer* boxSizer120 = new wxBoxSizer(wxVERTICAL);
    m_splitterPage112->SetSizer(boxSizer120);

    m_locals = new clThemedTreeCtrl(m_splitterPage112, wxID_ANY, wxDefaultPosition,
                                    wxDLG_UNIT(m_splitterPage112, wxSize(-1, -1)), wxTR_DEFAULT_STYLE | wxTR_HIDE_ROOT);

    boxSizer120->Add(m_locals, 1, wxALL | wxEXPAND, WXC_FROM_DIP(2));

    m_splitterPage108 = new wxPanel(m_splitter104, wxID_ANY, wxDefaultPosition,
                                    wxDLG_UNIT(m_splitter104, wxSize(-1, -1)), wxTAB_TRAVERSAL);
    m_splitter104->SplitVertically(m_splitterPage112, m_splitterPage108, 0);

    wxBoxSizer* boxSizer118 = new wxBoxSizer(wxVERTICAL);
    m_splitterPage108->SetSizer(boxSizer118);

    m_splitter168 = new wxSplitterWindow(m_splitterPage108, wxID_ANY, wxDefaultPosition,
                                         wxDLG_UNIT(m_splitterPage108, wxSize(-1, -1)), wxSP_LIVE_UPDATE);
    m_splitter168->SetSashGravity(0.5);
    m_splitter168->SetMinimumPaneSize(10);

    boxSizer118->Add(m_splitter168, 1, wxEXPAND, WXC_FROM_DIP(5));

    m_splitterPage172 = new wxPanel(m_splitter168, wxID_ANY, wxDefaultPosition,
                                    wxDLG_UNIT(m_splitter168, wxSize(-1, -1)), wxTAB_TRAVERSAL);

    wxBoxSizer* boxSizer178 = new wxBoxSizer(wxVERTICAL);
    m_splitterPage172->SetSizer(boxSizer178);

    m_dvListCtrlCallstack = new clThemedListCtrl(
        m_splitterPage172, wxID_ANY, wxDefaultPosition, wxDLG_UNIT(m_splitterPage172, wxSize(-1, -1)),
        wxDV_VERT_RULES | wxDV_HORIZ_RULES | wxDV_ROW_LINES | wxDV_SINGLE | wxBORDER_SIMPLE);

    boxSizer178->Add(m_dvListCtrlCallstack, 1, wxALL | wxEXPAND, WXC_FROM_DIP(2));

    m_dvListCtrlCallstack->AppendTextColumn(_("#"), wxDATAVIEW_CELL_INERT, WXC_FROM_DIP(-2), wxALIGN_LEFT,
                                            wxDATAVIEW_COL_RESIZABLE);
    m_dvListCtrlCallstack->AppendTextColumn(_("Function"), wxDATAVIEW_CELL_INERT, WXC_FROM_DIP(-2), wxALIGN_LEFT,
                                            wxDATAVIEW_COL_RESIZABLE);
    m_dvListCtrlCallstack->AppendTextColumn(_("File"), wxDATAVIEW_CELL_INERT, WXC_FROM_DIP(-2), wxALIGN_LEFT,
                                            wxDATAVIEW_COL_RESIZABLE);
    m_dvListCtrlCallstack->AppendTextColumn(_("Line"), wxDATAVIEW_CELL_INERT, WXC_FROM_DIP(-2), wxALIGN_LEFT,
                                            wxDATAVIEW_COL_RESIZABLE);
    m_splitterPage176 = new wxPanel(m_splitter168, wxID_ANY, wxDefaultPosition,
                                    wxDLG_UNIT(m_splitter168, wxSize(-1, -1)), wxTAB_TRAVERSAL);
    m_splitter168->SplitVertically(m_splitterPage172, m_splitterPage176, 0);

    wxBoxSizer* boxSizer180 = new wxBoxSizer(wxVERTICAL);
    m_splitterPage176->SetSizer(boxSizer180);

    m_notebook = new Notebook(m_splitterPage176, wxID_ANY, wxDefaultPosition,
                              wxDLG_UNIT(m_splitterPage176, wxSize(-1, -1)), wxBK_DEFAULT);
    m_notebook->SetName(wxT("m_notebook"));

    boxSizer180->Add(m_notebook, 1, wxALL | wxEXPAND, WXC_FROM_DIP(2));

    m_panelConsoleLog =
        new wxPanel(m_notebook, wxID_ANY, wxDefaultPosition, wxDLG_UNIT(m_notebook, wxSize(-1, -1)), wxTAB_TRAVERSAL);
    m_notebook->AddPage(m_panelConsoleLog, _("Console"), true);

    wxBoxSizer* boxSizer188 = new wxBoxSizer(wxVERTICAL);
    m_panelConsoleLog->SetSizer(boxSizer188);

    m_panelBreakpoints =
        new wxPanel(m_notebook, wxID_ANY, wxDefaultPosition, wxDLG_UNIT(m_notebook, wxSize(-1, -1)), wxTAB_TRAVERSAL);
    m_notebook->AddPage(m_panelBreakpoints, _("Breakpoints"), false);

    wxBoxSizer* boxSizer190 = new wxBoxSizer(wxVERTICAL);
    m_panelBreakpoints->SetSizer(boxSizer190);

    m_dvListCtrlBreakpoints = new wxDataViewListCtrl(m_panelBreakpoints, wxID_ANY, wxDefaultPosition,
                                                     wxDLG_UNIT(m_panelBreakpoints, wxSize(-1, -1)),
                                                     wxDV_VERT_RULES | wxDV_HORIZ_RULES | wxDV_ROW_LINES | wxDV_SINGLE);

    boxSizer190->Add(m_dvListCtrlBreakpoints, 1, wxALL | wxEXPAND, WXC_FROM_DIP(2));

    m_dvListCtrlBreakpoints->AppendTextColumn(_("ID"), wxDATAVIEW_CELL_INERT, WXC_FROM_DIP(40), wxALIGN_LEFT,
                                              wxDATAVIEW_COL_RESIZABLE);
    m_dvListCtrlBreakpoints->AppendTextColumn(_("Line"), wxDATAVIEW_CELL_INERT, WXC_FROM_DIP(50), wxALIGN_LEFT,
                                              wxDATAVIEW_COL_RESIZABLE);
    m_dvListCtrlBreakpoints->AppendTextColumn(_("File"), wxDATAVIEW_CELL_INERT, WXC_FROM_DIP(250), wxALIGN_LEFT,
                                              wxDATAVIEW_COL_RESIZABLE);

    SetName(wxT("NodeJSDebuggerPaneBase"));
    SetSize(wxDLG_UNIT(this, wxSize(500, 250)));
    if(GetSizer()) { GetSizer()->Fit(this); }
    // Connect events
    m_locals->Connect(wxEVT_COMMAND_TREE_ITEM_EXPANDING, wxTreeEventHandler(NodeJSDebuggerPaneBase::OnLocalExpanding),
                      NULL, this);
    m_dvListCtrlCallstack->Connect(wxEVT_COMMAND_DATAVIEW_ITEM_ACTIVATED,
                                   wxDataViewEventHandler(NodeJSDebuggerPaneBase::OnItemActivated), NULL, this);
    m_dvListCtrlCallstack->Connect(wxEVT_COMMAND_DATAVIEW_SELECTION_CHANGED,
                                   wxDataViewEventHandler(NodeJSDebuggerPaneBase::OnItemActivated), NULL, this);
    m_dvListCtrlBreakpoints->Connect(wxEVT_COMMAND_DATAVIEW_SELECTION_CHANGED,
                                     wxDataViewEventHandler(NodeJSDebuggerPaneBase::OnBreakpointSelected), NULL, this);
    m_dvListCtrlBreakpoints->Connect(wxEVT_COMMAND_DATAVIEW_ITEM_ACTIVATED,
                                     wxDataViewEventHandler(NodeJSDebuggerPaneBase::OnBreakpointSelected), NULL, this);
}

NodeJSDebuggerPaneBase::~NodeJSDebuggerPaneBase()
{
    m_locals->Disconnect(wxEVT_COMMAND_TREE_ITEM_EXPANDING,
                         wxTreeEventHandler(NodeJSDebuggerPaneBase::OnLocalExpanding), NULL, this);
    m_dvListCtrlCallstack->Disconnect(wxEVT_COMMAND_DATAVIEW_ITEM_ACTIVATED,
                                      wxDataViewEventHandler(NodeJSDebuggerPaneBase::OnItemActivated), NULL, this);
    m_dvListCtrlCallstack->Disconnect(wxEVT_COMMAND_DATAVIEW_SELECTION_CHANGED,
                                      wxDataViewEventHandler(NodeJSDebuggerPaneBase::OnItemActivated), NULL, this);
    m_dvListCtrlBreakpoints->Disconnect(wxEVT_COMMAND_DATAVIEW_SELECTION_CHANGED,
                                        wxDataViewEventHandler(NodeJSDebuggerPaneBase::OnBreakpointSelected), NULL,
                                        this);
    m_dvListCtrlBreakpoints->Disconnect(wxEVT_COMMAND_DATAVIEW_ITEM_ACTIVATED,
                                        wxDataViewEventHandler(NodeJSDebuggerPaneBase::OnBreakpointSelected), NULL,
                                        this);
}

NodeJSNewWorkspaceDlgBase::NodeJSNewWorkspaceDlgBase(wxWindow* parent, wxWindowID id, const wxString& title,
                                                     const wxPoint& pos, const wxSize& size, long style)
    : wxDialog(parent, id, title, pos, size, style)
{
    if(!bBitmapLoaded) {
        // We need to initialise the default bitmap handler
        wxXmlResource::Get()->AddHandler(new wxBitmapXmlHandler);
        wxCD9C6InitBitmapResources();
        bBitmapLoaded = true;
    }

    wxBoxSizer* boxSizer140 = new wxBoxSizer(wxVERTICAL);
    this->SetSizer(boxSizer140);

    wxFlexGridSizer* flexGridSizer148 = new wxFlexGridSizer(0, 2, 0, 0);
    flexGridSizer148->SetFlexibleDirection(wxBOTH);
    flexGridSizer148->SetNonFlexibleGrowMode(wxFLEX_GROWMODE_SPECIFIED);
    flexGridSizer148->AddGrowableCol(1);

    boxSizer140->Add(flexGridSizer148, 1, wxALL | wxEXPAND, WXC_FROM_DIP(5));

    m_staticText160 =
        new wxStaticText(this, wxID_ANY, _("Name:"), wxDefaultPosition, wxDLG_UNIT(this, wxSize(-1, -1)), 0);

    flexGridSizer148->Add(m_staticText160, 0, wxALL | wxALIGN_RIGHT | wxALIGN_CENTER_VERTICAL, WXC_FROM_DIP(5));

    m_textCtrllName = new wxTextCtrl(this, wxID_ANY, wxT(""), wxDefaultPosition, wxDLG_UNIT(this, wxSize(-1, -1)), 0);
    m_textCtrllName->SetFocus();
#if wxVERSION_NUMBER >= 3000
    m_textCtrllName->SetHint(wxT(""));
#endif

    flexGridSizer148->Add(m_textCtrllName, 0, wxALL | wxEXPAND | wxALIGN_CENTER_VERTICAL, WXC_FROM_DIP(5));

    m_staticText150 =
        new wxStaticText(this, wxID_ANY, _("Path:"), wxDefaultPosition, wxDLG_UNIT(this, wxSize(-1, -1)), 0);

    flexGridSizer148->Add(m_staticText150, 0, wxALL | wxALIGN_RIGHT | wxALIGN_CENTER_VERTICAL, WXC_FROM_DIP(5));

    m_dirPickerFolder = new wxDirPickerCtrl(this, wxID_ANY, wxEmptyString, _("Select a folder"), wxDefaultPosition,
                                            wxDLG_UNIT(this, wxSize(-1, -1)),
                                            wxDIRP_SMALL | wxDIRP_DEFAULT_STYLE | wxDIRP_USE_TEXTCTRL);

    flexGridSizer148->Add(m_dirPickerFolder, 0, wxALL | wxEXPAND | wxALIGN_CENTER_VERTICAL, WXC_FROM_DIP(5));

    flexGridSizer148->Add(0, 0, 1, wxALL, WXC_FROM_DIP(5));

    m_checkBoxNewFolder = new wxCheckBox(this, wxID_ANY, _("Create the workspace in a separate directory"),
                                         wxDefaultPosition, wxDLG_UNIT(this, wxSize(-1, -1)), 0);
    m_checkBoxNewFolder->SetValue(true);

    flexGridSizer148->Add(m_checkBoxNewFolder, 0, wxALL | wxALIGN_CENTER_VERTICAL, WXC_FROM_DIP(5));

    m_staticTextPreview =
        new wxStaticText(this, wxID_ANY, wxT(""), wxDefaultPosition, wxDLG_UNIT(this, wxSize(-1, -1)), wxALIGN_CENTRE);
    m_staticTextPreview->SetForegroundColour(wxColour(wxT("rgb(21,144,18)")));

    boxSizer140->Add(m_staticTextPreview, 0, wxALL | wxEXPAND, WXC_FROM_DIP(5));

    m_stdBtnSizer142 = new wxStdDialogButtonSizer();

    boxSizer140->Add(m_stdBtnSizer142, 0, wxALL | wxALIGN_CENTER_HORIZONTAL, WXC_FROM_DIP(10));

    m_button144 = new wxButton(this, wxID_OK, wxT(""), wxDefaultPosition, wxDLG_UNIT(this, wxSize(-1, -1)), 0);
    m_button144->SetDefault();
    m_stdBtnSizer142->AddButton(m_button144);

    m_button146 = new wxButton(this, wxID_CANCEL, wxT(""), wxDefaultPosition, wxDLG_UNIT(this, wxSize(-1, -1)), 0);
    m_stdBtnSizer142->AddButton(m_button146);
    m_stdBtnSizer142->Realize();

    SetName(wxT("NodeJSNewWorkspaceDlgBase"));
    SetSize(wxDLG_UNIT(this, wxSize(-1, -1)));
    if(GetSizer()) { GetSizer()->Fit(this); }
    if(GetParent()) {
        CentreOnParent(wxBOTH);
    } else {
        CentreOnScreen(wxBOTH);
    }
#if wxVERSION_NUMBER >= 2900
    if(!wxPersistenceManager::Get().Find(this)) {
        wxPersistenceManager::Get().RegisterAndRestore(this);
    } else {
        wxPersistenceManager::Get().Restore(this);
    }
#endif
    // Connect events
    m_textCtrllName->Connect(wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler(NodeJSNewWorkspaceDlgBase::OnTextUpdate),
                             NULL, this);
    m_dirPickerFolder->Connect(wxEVT_COMMAND_DIRPICKER_CHANGED,
                               wxFileDirPickerEventHandler(NodeJSNewWorkspaceDlgBase::OnFolderSelected), NULL, this);
    m_checkBoxNewFolder->Connect(wxEVT_COMMAND_CHECKBOX_CLICKED,
                                 wxCommandEventHandler(NodeJSNewWorkspaceDlgBase::OnCheckNewFolder), NULL, this);
    m_button144->Connect(wxEVT_UPDATE_UI, wxUpdateUIEventHandler(NodeJSNewWorkspaceDlgBase::OnOKUI), NULL, this);
}

NodeJSNewWorkspaceDlgBase::~NodeJSNewWorkspaceDlgBase()
{
    m_textCtrllName->Disconnect(wxEVT_COMMAND_TEXT_UPDATED,
                                wxCommandEventHandler(NodeJSNewWorkspaceDlgBase::OnTextUpdate), NULL, this);
    m_dirPickerFolder->Disconnect(wxEVT_COMMAND_DIRPICKER_CHANGED,
                                  wxFileDirPickerEventHandler(NodeJSNewWorkspaceDlgBase::OnFolderSelected), NULL, this);
    m_checkBoxNewFolder->Disconnect(wxEVT_COMMAND_CHECKBOX_CLICKED,
                                    wxCommandEventHandler(NodeJSNewWorkspaceDlgBase::OnCheckNewFolder), NULL, this);
    m_button144->Disconnect(wxEVT_UPDATE_UI, wxUpdateUIEventHandler(NodeJSNewWorkspaceDlgBase::OnOKUI), NULL, this);
}

WebToolsImages::WebToolsImages()
    : wxImageList(16, 16, true)
    , m_imagesWidth(16)
    , m_imagesHeight(16)
{
    if(!bBitmapLoaded) {
        // We need to initialise the default bitmap handler
        wxXmlResource::Get()->AddHandler(new wxBitmapXmlHandler);
        wxCD9C6InitBitmapResources();
        bBitmapLoaded = true;
    }
}

WebToolsImages::~WebToolsImages() {}

NodeJSCliDebuggerPaneBase::NodeJSCliDebuggerPaneBase(wxWindow* parent, wxWindowID id, const wxPoint& pos,
                                                     const wxSize& size, long style)
    : wxPanel(parent, id, pos, size, style)
{
    if(!bBitmapLoaded) {
        // We need to initialise the default bitmap handler
        wxXmlResource::Get()->AddHandler(new wxBitmapXmlHandler);
        wxCD9C6InitBitmapResources();
        bBitmapLoaded = true;
    }

    wxBoxSizer* boxSizer269 = new wxBoxSizer(wxVERTICAL);
    this->SetSizer(boxSizer269);

    m_splitter271 = new wxSplitterWindow(this, wxID_ANY, wxDefaultPosition, wxDLG_UNIT(this, wxSize(-1, -1)),
                                         wxSP_LIVE_UPDATE | wxSP_NO_XP_THEME | wxSP_3DSASH);
    m_splitter271->SetSashGravity(0.5);
    m_splitter271->SetMinimumPaneSize(10);

    boxSizer269->Add(m_splitter271, 1, wxEXPAND, WXC_FROM_DIP(5));

    m_splitterPageCallstack = new wxPanel(m_splitter271, wxID_ANY, wxDefaultPosition,
                                          wxDLG_UNIT(m_splitter271, wxSize(-1, -1)), wxTAB_TRAVERSAL);

    wxBoxSizer* boxSizer281 = new wxBoxSizer(wxVERTICAL);
    m_splitterPageCallstack->SetSizer(boxSizer281);

    m_dvListCtrlCallstack =
        new clThemedListCtrl(m_splitterPageCallstack, wxID_ANY, wxDefaultPosition,
                             wxDLG_UNIT(m_splitterPageCallstack, wxSize(-1, -1)), wxDV_ROW_LINES | wxDV_SINGLE);

    boxSizer281->Add(m_dvListCtrlCallstack, 1, wxEXPAND, WXC_FROM_DIP(5));

    m_dvListCtrlCallstack->AppendTextColumn(_("#"), wxDATAVIEW_CELL_INERT, WXC_FROM_DIP(-2), wxALIGN_LEFT,
                                            wxDATAVIEW_COL_RESIZABLE);
    m_dvListCtrlCallstack->AppendTextColumn(_("Where"), wxDATAVIEW_CELL_INERT, WXC_FROM_DIP(-2), wxALIGN_LEFT,
                                            wxDATAVIEW_COL_RESIZABLE);
    m_splitterPageWatches = new wxPanel(m_splitter271, wxID_ANY, wxDefaultPosition,
                                        wxDLG_UNIT(m_splitter271, wxSize(-1, -1)), wxTAB_TRAVERSAL);
    m_splitter271->SplitVertically(m_splitterPageCallstack, m_splitterPageWatches, 0);

    SetName(wxT("NodeJSCliDebuggerPaneBase"));
    SetSize(wxDLG_UNIT(this, wxSize(500, 300)));
    if(GetSizer()) { GetSizer()->Fit(this); }
}

NodeJSCliDebuggerPaneBase::~NodeJSCliDebuggerPaneBase() {}
