/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_FILEDELETERESULTITEM_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_FILEDELETERESULTITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/MediaDeleteItem.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * The result of file deletion.
                */
                class FileDeleteResultItem : public AbstractModel
                {
                public:
                    FileDeleteResultItem();
                    ~FileDeleteResultItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The ID of the file deleted.
                     * @return FileId The ID of the file deleted.
                     * 
                     */
                    std::string GetFileId() const;

                    /**
                     * 设置The ID of the file deleted.
                     * @param _fileId The ID of the file deleted.
                     * 
                     */
                    void SetFileId(const std::string& _fileId);

                    /**
                     * 判断参数 FileId 是否已赋值
                     * @return FileId 是否已赋值
                     * 
                     */
                    bool FileIdHasBeenSet() const;

                    /**
                     * 获取The type of the file deleted.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return DeleteParts The type of the file deleted.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    std::vector<MediaDeleteItem> GetDeleteParts() const;

                    /**
                     * 设置The type of the file deleted.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param _deleteParts The type of the file deleted.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetDeleteParts(const std::vector<MediaDeleteItem>& _deleteParts);

                    /**
                     * 判断参数 DeleteParts 是否已赋值
                     * @return DeleteParts 是否已赋值
                     * 
                     */
                    bool DeletePartsHasBeenSet() const;

                private:

                    /**
                     * The ID of the file deleted.
                     */
                    std::string m_fileId;
                    bool m_fileIdHasBeenSet;

                    /**
                     * The type of the file deleted.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::vector<MediaDeleteItem> m_deleteParts;
                    bool m_deletePartsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_FILEDELETERESULTITEM_H_
