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

#ifndef TENCENTCLOUD_TSE_V20201207_MODEL_LISTCLOUDNATIVEAPIGATEWAYRESULT_H_
#define TENCENTCLOUD_TSE_V20201207_MODEL_LISTCLOUDNATIVEAPIGATEWAYRESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tse/v20201207/model/DescribeCloudNativeAPIGatewayResult.h>


namespace TencentCloud
{
    namespace Tse
    {
        namespace V20201207
        {
            namespace Model
            {
                /**
                * Retrieve the response result of the Cloud Native API gateway instance list.
                */
                class ListCloudNativeAPIGatewayResult : public AbstractModel
                {
                public:
                    ListCloudNativeAPIGatewayResult();
                    ~ListCloudNativeAPIGatewayResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Total quantity.
                     * @return TotalCount Total quantity.
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 设置Total quantity.
                     * @param _totalCount Total quantity.
                     * 
                     */
                    void SetTotalCount(const int64_t& _totalCount);

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取Cloud Native API gateway instance list.
                     * @return GatewayList Cloud Native API gateway instance list.
                     * 
                     */
                    std::vector<DescribeCloudNativeAPIGatewayResult> GetGatewayList() const;

                    /**
                     * 设置Cloud Native API gateway instance list.
                     * @param _gatewayList Cloud Native API gateway instance list.
                     * 
                     */
                    void SetGatewayList(const std::vector<DescribeCloudNativeAPIGatewayResult>& _gatewayList);

                    /**
                     * 判断参数 GatewayList 是否已赋值
                     * @return GatewayList 是否已赋值
                     * 
                     */
                    bool GatewayListHasBeenSet() const;

                private:

                    /**
                     * Total quantity.
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * Cloud Native API gateway instance list.
                     */
                    std::vector<DescribeCloudNativeAPIGatewayResult> m_gatewayList;
                    bool m_gatewayListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSE_V20201207_MODEL_LISTCLOUDNATIVEAPIGATEWAYRESULT_H_
