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
                * Information of the time point screenshots in a VOD file
                */
                class MediaSnapshotByTimeOffsetItem : public AbstractModel
                {
                public:
                    MediaSnapshotByTimeOffsetItem();
                    ~MediaSnapshotByTimeOffsetItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Specification of a time point screenshot template. 
                     * @return Definition Specification of a time point screenshot template. 
                     * 
                     */
                    int64_t GetDefinition() const;

                    /**
                     * 设置Specification of a time point screenshot template. 
                     * @param _definition Specification of a time point screenshot template. 
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
                     * 获取Information set of screenshots of the same specification. Each element represents a screenshot.
                     * @return PicInfoSet Information set of screenshots of the same specification. Each element represents a screenshot.
                     * 
                     */
                    std::vector<MediaSnapshotByTimePicInfoItem> GetPicInfoSet() const;

                    /**
                     * 设置Information set of screenshots of the same specification. Each element represents a screenshot.
                     * @param _picInfoSet Information set of screenshots of the same specification. Each element represents a screenshot.
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
                     * 获取Location of a time point screenshot file.
                     * @return Storage Location of a time point screenshot file.
                     * 
                     */
                    TaskOutputStorage GetStorage() const;

                    /**
                     * 设置Location of a time point screenshot file.
                     * @param _storage Location of a time point screenshot file.
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
                     * Specification of a time point screenshot template. 
                     */
                    int64_t m_definition;
                    bool m_definitionHasBeenSet;

                    /**
                     * Information set of screenshots of the same specification. Each element represents a screenshot.
                     */
                    std::vector<MediaSnapshotByTimePicInfoItem> m_picInfoSet;
                    bool m_picInfoSetHasBeenSet;

                    /**
                     * Location of a time point screenshot file.
                     */
                    TaskOutputStorage m_storage;
                    bool m_storageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_MEDIASNAPSHOTBYTIMEOFFSETITEM_H_
