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

#ifndef TENCENTCLOUD_CVM_V20170312_MODEL_REGIONINFO_H_
#define TENCENTCLOUD_CVM_V20170312_MODEL_REGIONINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cvm
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * Region information.
                */
                class RegionInfo : public AbstractModel
                {
                public:
                    RegionInfo();
                    ~RegionInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Region name, such as `ap-guangzhou`
                     * @return Region Region name, such as `ap-guangzhou`
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置Region name, such as `ap-guangzhou`
                     * @param Region Region name, such as `ap-guangzhou`
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取Region description, such as South China (Guangzhou)
                     * @return RegionName Region description, such as South China (Guangzhou)
                     */
                    std::string GetRegionName() const;

                    /**
                     * 设置Region description, such as South China (Guangzhou)
                     * @param RegionName Region description, such as South China (Guangzhou)
                     */
                    void SetRegionName(const std::string& _regionName);

                    /**
                     * 判断参数 RegionName 是否已赋值
                     * @return RegionName 是否已赋值
                     */
                    bool RegionNameHasBeenSet() const;

                    /**
                     * 获取Whether the region is available
                     * @return RegionState Whether the region is available
                     */
                    std::string GetRegionState() const;

                    /**
                     * 设置Whether the region is available
                     * @param RegionState Whether the region is available
                     */
                    void SetRegionState(const std::string& _regionState);

                    /**
                     * 判断参数 RegionState 是否已赋值
                     * @return RegionState 是否已赋值
                     */
                    bool RegionStateHasBeenSet() const;

                private:

                    /**
                     * Region name, such as `ap-guangzhou`
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * Region description, such as South China (Guangzhou)
                     */
                    std::string m_regionName;
                    bool m_regionNameHasBeenSet;

                    /**
                     * Whether the region is available
                     */
                    std::string m_regionState;
                    bool m_regionStateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CVM_V20170312_MODEL_REGIONINFO_H_
