/*
Copyright (C) 2020  YLoader.com

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "stdafx.h"
// SHARED_HANDLERS can be defined in an ATL project implementing preview, thumbnail
// and search filter handlers and allows sharing of document code with that project.
#ifndef SHARED_HANDLERS
#include "yloader.h"
#endif

#include "yloaderDoc.h"

#include <propkey.h>

#ifdef _DEBUG
#define new DEBUG_NEW
#endif

// CyloaderDoc

IMPLEMENT_DYNCREATE(CyloaderDoc, CDocument)

BEGIN_MESSAGE_MAP(CyloaderDoc, CDocument)
END_MESSAGE_MAP()

// CyloaderDoc construction/destruction

CyloaderDoc::CyloaderDoc() {
  // TODO: add one-time construction code here
}

CyloaderDoc::~CyloaderDoc() {}

BOOL CyloaderDoc::OnNewDocument() {
  if (!CDocument::OnNewDocument()) {
    return FALSE;
  }

  // TODO: add reinitialization code here
  // (SDI documents will reuse this document)

  return TRUE;
}

// CyloaderDoc serialization

void CyloaderDoc::Serialize(CArchive& ar) {
  if (ar.IsStoring()) {
    // TODO: add storing code here
  }
  else {
    // TODO: add loading code here
  }
}

// CyloaderDoc diagnostics

#ifdef _DEBUG
void CyloaderDoc::AssertValid() const { CDocument::AssertValid(); }

void CyloaderDoc::Dump(CDumpContext& dc) const { CDocument::Dump(dc); }
#endif  //_DEBUG

// CyloaderDoc commands
