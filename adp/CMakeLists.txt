#
# Copyright (c) 2017-2025 Tencent. All Rights Reserved.
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#    http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.
#

set(adp_public_header
  include/tencentcloud/adp/v20260520/AdpClient.h
  )

set(adp_public_header_model
  include/tencentcloud/adp/v20260520/model/SearchResultPayload.h
  include/tencentcloud/adp/v20260520/model/SearchContext.h
  include/tencentcloud/adp/v20260520/model/KVPair.h
  include/tencentcloud/adp/v20260520/model/KnowledgeResult.h
  include/tencentcloud/adp/v20260520/model/SearchInput.h
  include/tencentcloud/adp/v20260520/model/FinalRerankConfig.h
  include/tencentcloud/adp/v20260520/model/SimilarQuestionExtra.h
  include/tencentcloud/adp/v20260520/model/SearchKnowledgeRequest.h
  include/tencentcloud/adp/v20260520/model/DBRetrievalConfig.h
  include/tencentcloud/adp/v20260520/model/SearchFilterConfig.h
  include/tencentcloud/adp/v20260520/model/TokenUsage.h
  include/tencentcloud/adp/v20260520/model/KBRetrievalConfig.h
  include/tencentcloud/adp/v20260520/model/ModelParams.h
  include/tencentcloud/adp/v20260520/model/SearchAdvancedConfig.h
  include/tencentcloud/adp/v20260520/model/QARetrievalConfig.h
  include/tencentcloud/adp/v20260520/model/SearchBilling.h
  include/tencentcloud/adp/v20260520/model/TableEnhancement.h
  include/tencentcloud/adp/v20260520/model/KnowledgeSource.h
  include/tencentcloud/adp/v20260520/model/SearchFilter.h
  include/tencentcloud/adp/v20260520/model/RerankConfig.h
  include/tencentcloud/adp/v20260520/model/RetrievalOption.h
  include/tencentcloud/adp/v20260520/model/KnowledgeSnippetProfile.h
  include/tencentcloud/adp/v20260520/model/ExpirationAwareness.h
  include/tencentcloud/adp/v20260520/model/GraphRAG.h
  include/tencentcloud/adp/v20260520/model/ModelDetailInfo.h
  include/tencentcloud/adp/v20260520/model/DocRetrievalConfig.h
  include/tencentcloud/adp/v20260520/model/SearchKnowledgeResponse.h
  )

set(adp_src
  src/v20260520/AdpClient.cpp
  src/v20260520/model/SearchResultPayload.cpp
  src/v20260520/model/SearchContext.cpp
  src/v20260520/model/KVPair.cpp
  src/v20260520/model/KnowledgeResult.cpp
  src/v20260520/model/SearchInput.cpp
  src/v20260520/model/FinalRerankConfig.cpp
  src/v20260520/model/SimilarQuestionExtra.cpp
  src/v20260520/model/SearchKnowledgeRequest.cpp
  src/v20260520/model/DBRetrievalConfig.cpp
  src/v20260520/model/SearchFilterConfig.cpp
  src/v20260520/model/TokenUsage.cpp
  src/v20260520/model/KBRetrievalConfig.cpp
  src/v20260520/model/ModelParams.cpp
  src/v20260520/model/SearchAdvancedConfig.cpp
  src/v20260520/model/QARetrievalConfig.cpp
  src/v20260520/model/SearchBilling.cpp
  src/v20260520/model/TableEnhancement.cpp
  src/v20260520/model/KnowledgeSource.cpp
  src/v20260520/model/SearchFilter.cpp
  src/v20260520/model/RerankConfig.cpp
  src/v20260520/model/RetrievalOption.cpp
  src/v20260520/model/KnowledgeSnippetProfile.cpp
  src/v20260520/model/ExpirationAwareness.cpp
  src/v20260520/model/GraphRAG.cpp
  src/v20260520/model/ModelDetailInfo.cpp
  src/v20260520/model/DocRetrievalConfig.cpp
  src/v20260520/model/SearchKnowledgeResponse.cpp
  )

set(adp_include
    include/tencentcloud/adp
  )

add_library(adp ${LIB_TYPE}
  ${adp_public_header}
  ${adp_public_header_model}
  ${adp_src})

set_target_properties(adp
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}adp
  )

target_include_directories(adp
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(adp
  core)

#install(FILES ${adp_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/adp/v20260520)
#install(FILES ${adp_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/adp/v20260520/model)
install(DIRECTORY ${adp_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS adp
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )
