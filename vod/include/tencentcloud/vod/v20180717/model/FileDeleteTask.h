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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_FILEDELETETASK_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_FILEDELETETASK_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/FileDeleteResultItem.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * File deleting task
                */
                class FileDeleteTask : public AbstractModel
                {
                public:
                    FileDeleteTask();
                    ~FileDeleteTask() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取List of IDs of deleted files.
                     * @return FileIdSet List of IDs of deleted files.
                     * 
                     */
                    std::vector<std::string> GetFileIdSet() const;

                    /**
                     * 设置List of IDs of deleted files.
                     * @param _fileIdSet List of IDs of deleted files.
                     * 
                     */
                    void SetFileIdSet(const std::vector<std::string>& _fileIdSet);

                    /**
                     * 判断参数 FileIdSet 是否已赋值
                     * @return FileIdSet 是否已赋值
                     * 
                     */
                    bool FileIdSetHasBeenSet() const;

                    /**
                     * 获取The information of the files deleted.
                     * @return FileDeleteResultInfo The information of the files deleted.
                     * 
                     */
                    std::vector<FileDeleteResultItem> GetFileDeleteResultInfo() const;

                    /**
                     * 设置The information of the files deleted.
                     * @param _fileDeleteResultInfo The information of the files deleted.
                     * 
                     */
                    void SetFileDeleteResultInfo(const std::vector<FileDeleteResultItem>& _fileDeleteResultInfo);

                    /**
                     * 判断参数 FileDeleteResultInfo 是否已赋值
                     * @return FileDeleteResultInfo 是否已赋值
                     * 
                     */
                    bool FileDeleteResultInfoHasBeenSet() const;

                private:

                    /**
                     * List of IDs of deleted files.
                     */
                    std::vector<std::string> m_fileIdSet;
                    bool m_fileIdSetHasBeenSet;

                    /**
                     * The information of the files deleted.
                     */
                    std::vector<FileDeleteResultItem> m_fileDeleteResultInfo;
                    bool m_fileDeleteResultInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_FILEDELETETASK_H_
