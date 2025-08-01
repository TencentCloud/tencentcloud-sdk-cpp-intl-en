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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_BACKUPLIMITVPCITEM_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_BACKUPLIMITVPCITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * VPC settings for restricting backup download sources.
                */
                class BackupLimitVpcItem : public AbstractModel
                {
                public:
                    BackupLimitVpcItem();
                    ~BackupLimitVpcItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Specifies the region for limiting download sources. currently only supports the current region.
                     * @return Region Specifies the region for limiting download sources. currently only supports the current region.
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置Specifies the region for limiting download sources. currently only supports the current region.
                     * @param _region Specifies the region for limiting download sources. currently only supports the current region.
                     * 
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取Limit the vpc list for downloads.
                     * @return VpcList Limit the vpc list for downloads.
                     * 
                     */
                    std::vector<std::string> GetVpcList() const;

                    /**
                     * 设置Limit the vpc list for downloads.
                     * @param _vpcList Limit the vpc list for downloads.
                     * 
                     */
                    void SetVpcList(const std::vector<std::string>& _vpcList);

                    /**
                     * 判断参数 VpcList 是否已赋值
                     * @return VpcList 是否已赋值
                     * 
                     */
                    bool VpcListHasBeenSet() const;

                private:

                    /**
                     * Specifies the region for limiting download sources. currently only supports the current region.
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * Limit the vpc list for downloads.
                     */
                    std::vector<std::string> m_vpcList;
                    bool m_vpcListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_BACKUPLIMITVPCITEM_H_
