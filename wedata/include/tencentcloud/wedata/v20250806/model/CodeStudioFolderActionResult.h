/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_CODESTUDIOFOLDERACTIONRESULT_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_CODESTUDIOFOLDERACTIONRESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20250806
        {
            namespace Model
            {
                /**
                * CodeStudio folder object operation result.
                */
                class CodeStudioFolderActionResult : public AbstractModel
                {
                public:
                    CodeStudioFolderActionResult();
                    ~CodeStudioFolderActionResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Indicates whether the operation is successful. valid values: true (successful), false (unsuccessful).

                     * @return Status Indicates whether the operation is successful. valid values: true (successful), false (unsuccessful).

                     * 
                     */
                    bool GetStatus() const;

                    /**
                     * 设置Indicates whether the operation is successful. valid values: true (successful), false (unsuccessful).

                     * @param _status Indicates whether the operation is successful. valid values: true (successful), false (unsuccessful).

                     * 
                     */
                    void SetStatus(const bool& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Folder ID.


                     * @return FolderId Folder ID.


                     * 
                     */
                    std::string GetFolderId() const;

                    /**
                     * 设置Folder ID.


                     * @param _folderId Folder ID.


                     * 
                     */
                    void SetFolderId(const std::string& _folderId);

                    /**
                     * 判断参数 FolderId 是否已赋值
                     * @return FolderId 是否已赋值
                     * 
                     */
                    bool FolderIdHasBeenSet() const;

                private:

                    /**
                     * Indicates whether the operation is successful. valid values: true (successful), false (unsuccessful).

                     */
                    bool m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Folder ID.


                     */
                    std::string m_folderId;
                    bool m_folderIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_CODESTUDIOFOLDERACTIONRESULT_H_
