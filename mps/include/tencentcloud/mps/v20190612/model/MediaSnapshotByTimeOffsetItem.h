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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_MEDIASNAPSHOTBYTIMEOFFSETITEM_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_MEDIASNAPSHOTBYTIMEOFFSETITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/MediaSnapshotByTimePicInfoItem.h>
#include <tencentcloud/mps/v20190612/model/TaskOutputStorage.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * Screenshot information of a VOD file at the specified time point
                */
                class MediaSnapshotByTimeOffsetItem : public AbstractModel
                {
                public:
                    MediaSnapshotByTimeOffsetItem();
                    ~MediaSnapshotByTimeOffsetItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取SnapshotByTimeOffset specification. See SnapshotByTimeOffset parameter template.
                     * @return Definition SnapshotByTimeOffset specification. See SnapshotByTimeOffset parameter template.
                     * 
                     */
                    int64_t GetDefinition() const;

                    /**
                     * 设置SnapshotByTimeOffset specification. See SnapshotByTimeOffset parameter template.
                     * @param _definition SnapshotByTimeOffset specification. See SnapshotByTimeOffset parameter template.
                     * 
                     */
                    void SetDefinition(const int64_t& _definition);

                    /**
                     * 判断参数 Definition 是否已赋值
                     * @return Definition 是否已赋值
                     * 
                     */
                    bool DefinitionHasBeenSet() const;

                    /**
                     * 获取Screenshot information set of the same specification, where each element represents a screenshot.
                     * @return PicInfoSet Screenshot information set of the same specification, where each element represents a screenshot.
                     * 
                     */
                    std::vector<MediaSnapshotByTimePicInfoItem> GetPicInfoSet() const;

                    /**
                     * 设置Screenshot information set of the same specification, where each element represents a screenshot.
                     * @param _picInfoSet Screenshot information set of the same specification, where each element represents a screenshot.
                     * 
                     */
                    void SetPicInfoSet(const std::vector<MediaSnapshotByTimePicInfoItem>& _picInfoSet);

                    /**
                     * 判断参数 PicInfoSet 是否已赋值
                     * @return PicInfoSet 是否已赋值
                     * 
                     */
                    bool PicInfoSetHasBeenSet() const;

                    /**
                     * 获取Storage location of the time point screenshot file.
                     * @return Storage Storage location of the time point screenshot file.
                     * 
                     */
                    TaskOutputStorage GetStorage() const;

                    /**
                     * 设置Storage location of the time point screenshot file.
                     * @param _storage Storage location of the time point screenshot file.
                     * 
                     */
                    void SetStorage(const TaskOutputStorage& _storage);

                    /**
                     * 判断参数 Storage 是否已赋值
                     * @return Storage 是否已赋值
                     * 
                     */
                    bool StorageHasBeenSet() const;

                private:

                    /**
                     * SnapshotByTimeOffset specification. See SnapshotByTimeOffset parameter template.
                     */
                    int64_t m_definition;
                    bool m_definitionHasBeenSet;

                    /**
                     * Screenshot information set of the same specification, where each element represents a screenshot.
                     */
                    std::vector<MediaSnapshotByTimePicInfoItem> m_picInfoSet;
                    bool m_picInfoSetHasBeenSet;

                    /**
                     * Storage location of the time point screenshot file.
                     */
                    TaskOutputStorage m_storage;
                    bool m_storageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_MEDIASNAPSHOTBYTIMEOFFSETITEM_H_
