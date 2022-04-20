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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_STORAGEREGIONINFO_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_STORAGEREGIONINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * The information of a storage region.
                */
                class StorageRegionInfo : public AbstractModel
                {
                public:
                    StorageRegionInfo();
                    ~StorageRegionInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Storage region.
                     * @return Region Storage region.
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置Storage region.
                     * @param Region Storage region.
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取Description of the storage region.
                     * @return Description Description of the storage region.
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Description of the storage region.
                     * @param Description Description of the storage region.
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取Whether storage is enabled in the region. Valid values:
<li>opened: Enabled</li>
<li>unopened: Not enabled</li>
                     * @return Status Whether storage is enabled in the region. Valid values:
<li>opened: Enabled</li>
<li>unopened: Not enabled</li>
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Whether storage is enabled in the region. Valid values:
<li>opened: Enabled</li>
<li>unopened: Not enabled</li>
                     * @param Status Whether storage is enabled in the region. Valid values:
<li>opened: Enabled</li>
<li>unopened: Not enabled</li>
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Whether the region is the default storage region. Valid values: true, false.
                     * @return IsDefault Whether the region is the default storage region. Valid values: true, false.
                     */
                    bool GetIsDefault() const;

                    /**
                     * 设置Whether the region is the default storage region. Valid values: true, false.
                     * @param IsDefault Whether the region is the default storage region. Valid values: true, false.
                     */
                    void SetIsDefault(const bool& _isDefault);

                    /**
                     * 判断参数 IsDefault 是否已赋值
                     * @return IsDefault 是否已赋值
                     */
                    bool IsDefaultHasBeenSet() const;

                private:

                    /**
                     * Storage region.
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * Description of the storage region.
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * Whether storage is enabled in the region. Valid values:
<li>opened: Enabled</li>
<li>unopened: Not enabled</li>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Whether the region is the default storage region. Valid values: true, false.
                     */
                    bool m_isDefault;
                    bool m_isDefaultHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_STORAGEREGIONINFO_H_
