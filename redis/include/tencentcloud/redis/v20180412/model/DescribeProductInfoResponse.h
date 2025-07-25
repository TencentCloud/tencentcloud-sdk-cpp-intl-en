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

#ifndef TENCENTCLOUD_REDIS_V20180412_MODEL_DESCRIBEPRODUCTINFORESPONSE_H_
#define TENCENTCLOUD_REDIS_V20180412_MODEL_DESCRIBEPRODUCTINFORESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/redis/v20180412/model/RegionConf.h>


namespace TencentCloud
{
    namespace Redis
    {
        namespace V20180412
        {
            namespace Model
            {
                /**
                * DescribeProductInfo response structure.
                */
                class DescribeProductInfoResponse : public AbstractModel
                {
                public:
                    DescribeProductInfoResponse();
                    ~DescribeProductInfoResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Sale information of a region.
                     * @return RegionSet Sale information of a region.
                     * 
                     */
                    std::vector<RegionConf> GetRegionSet() const;

                    /**
                     * 判断参数 RegionSet 是否已赋值
                     * @return RegionSet 是否已赋值
                     * 
                     */
                    bool RegionSetHasBeenSet() const;

                private:

                    /**
                     * Sale information of a region.
                     */
                    std::vector<RegionConf> m_regionSet;
                    bool m_regionSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_REDIS_V20180412_MODEL_DESCRIBEPRODUCTINFORESPONSE_H_
