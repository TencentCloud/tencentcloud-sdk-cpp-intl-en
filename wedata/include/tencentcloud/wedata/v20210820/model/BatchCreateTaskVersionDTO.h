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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_BATCHCREATETASKVERSIONDTO_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_BATCHCREATETASKVERSIONDTO_H_

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
        namespace V20210820
        {
            namespace Model
            {
                /**
                * Used by BatchCreateTaskVersion, describes task information
                */
                class BatchCreateTaskVersionDTO : public AbstractModel
                {
                public:
                    BatchCreateTaskVersionDTO();
                    ~BatchCreateTaskVersionDTO() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Task IDNote: This field may return null, indicating that no valid value can be obtained.
                     * @return TaskId Task IDNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置Task IDNote: This field may return null, indicating that no valid value can be obtained.
                     * @param _taskId Task IDNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetTaskId(const std::string& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取VersionRemark
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return VersionRemark VersionRemark
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetVersionRemark() const;

                    /**
                     * 设置VersionRemark
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _versionRemark VersionRemark
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetVersionRemark(const std::string& _versionRemark);

                    /**
                     * 判断参数 VersionRemark 是否已赋值
                     * @return VersionRemark 是否已赋值
                     * 
                     */
                    bool VersionRemarkHasBeenSet() const;

                    /**
                     * 获取Folder ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return FolderId Folder ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetFolderId() const;

                    /**
                     * 设置Folder ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _folderId Folder ID
Note: This field may return null, indicating that no valid value can be obtained.
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
                     * Task IDNote: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * VersionRemark
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_versionRemark;
                    bool m_versionRemarkHasBeenSet;

                    /**
                     * Folder ID
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_folderId;
                    bool m_folderIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_BATCHCREATETASKVERSIONDTO_H_
