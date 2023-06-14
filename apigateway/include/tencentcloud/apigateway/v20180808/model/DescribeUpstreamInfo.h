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

#ifndef TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_DESCRIBEUPSTREAMINFO_H_
#define TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_DESCRIBEUPSTREAMINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/apigateway/v20180808/model/UpstreamInfo.h>


namespace TencentCloud
{
    namespace Apigateway
    {
        namespace V20180808
        {
            namespace Model
            {
                /**
                * The returned result of upstream query
                */
                class DescribeUpstreamInfo : public AbstractModel
                {
                public:
                    DescribeUpstreamInfo();
                    ~DescribeUpstreamInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Total number of results
                     * @return TotalCount Total number of results
                     * 
                     */
                    uint64_t GetTotalCount() const;

                    /**
                     * 设置Total number of results
                     * @param _totalCount Total number of results
                     * 
                     */
                    void SetTotalCount(const uint64_t& _totalCount);

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取List of query result
                     * @return UpstreamSet List of query result
                     * 
                     */
                    std::vector<UpstreamInfo> GetUpstreamSet() const;

                    /**
                     * 设置List of query result
                     * @param _upstreamSet List of query result
                     * 
                     */
                    void SetUpstreamSet(const std::vector<UpstreamInfo>& _upstreamSet);

                    /**
                     * 判断参数 UpstreamSet 是否已赋值
                     * @return UpstreamSet 是否已赋值
                     * 
                     */
                    bool UpstreamSetHasBeenSet() const;

                private:

                    /**
                     * Total number of results
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * List of query result
                     */
                    std::vector<UpstreamInfo> m_upstreamSet;
                    bool m_upstreamSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_DESCRIBEUPSTREAMINFO_H_
