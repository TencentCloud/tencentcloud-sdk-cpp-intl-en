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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_TARGETREGIONINFO_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_TARGETREGIONINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Clb
    {
        namespace V20180317
        {
            namespace Model
            {
                /**
                * Information of the real server bound to a CLB instance, including region and network to which it belongs.
                */
                class TargetRegionInfo : public AbstractModel
                {
                public:
                    TargetRegionInfo();
                    ~TargetRegionInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Region of the target, such as ap-guangzhou
                     * @return Region Region of the target, such as ap-guangzhou
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置Region of the target, such as ap-guangzhou
                     * @param Region Region of the target, such as ap-guangzhou
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取Network of the target, which is in the format of vpc-abcd1234 for VPC or 0 for basic network
                     * @return VpcId Network of the target, which is in the format of vpc-abcd1234 for VPC or 0 for basic network
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置Network of the target, which is in the format of vpc-abcd1234 for VPC or 0 for basic network
                     * @param VpcId Network of the target, which is in the format of vpc-abcd1234 for VPC or 0 for basic network
                     */
                    void SetVpcId(const std::string& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     */
                    bool VpcIdHasBeenSet() const;

                private:

                    /**
                     * Region of the target, such as ap-guangzhou
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * Network of the target, which is in the format of vpc-abcd1234 for VPC or 0 for basic network
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_TARGETREGIONINFO_H_
