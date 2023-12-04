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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEVULDEFENCEPLUGINREQUEST_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEVULDEFENCEPLUGINREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcss/v20201101/model/RunTimeFilters.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * DescribeVulDefencePlugin request structure.
                */
                class DescribeVulDefencePluginRequest : public AbstractModel
                {
                public:
                    DescribeVulDefencePluginRequest();
                    ~DescribeVulDefencePluginRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Host ID or unique super node ID
                     * @return HostID Host ID or unique super node ID
                     * 
                     */
                    std::string GetHostID() const;

                    /**
                     * 设置Host ID or unique super node ID
                     * @param _hostID Host ID or unique super node ID
                     * 
                     */
                    void SetHostID(const std::string& _hostID);

                    /**
                     * 判断参数 HostID 是否已赋值
                     * @return HostID 是否已赋值
                     * 
                     */
                    bool HostIDHasBeenSet() const;

                    /**
                     * 获取Number of results to be returned. Default value: `10`. Maximum value: `100`.
                     * @return Limit Number of results to be returned. Default value: `10`. Maximum value: `100`.
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置Number of results to be returned. Default value: `10`. Maximum value: `100`.
                     * @param _limit Number of results to be returned. Default value: `10`. Maximum value: `100`.
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取Offset. Default value: `0`.
                     * @return Offset Offset. Default value: `0`.
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置Offset. Default value: `0`.
                     * @param _offset Offset. Default value: `0`.
                     * 
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取Filter condition
<li>
Status- String - Required: No - Plugin status. Valid values: `INJECTING` (injecting); `SUCCESS` (injected successfully); `FAIL` (injection failed); `TIMEOUT` (plugin timed out); `QUIT` (plugin exited).
</li>
                     * @return Filters Filter condition
<li>
Status- String - Required: No - Plugin status. Valid values: `INJECTING` (injecting); `SUCCESS` (injected successfully); `FAIL` (injection failed); `TIMEOUT` (plugin timed out); `QUIT` (plugin exited).
</li>
                     * 
                     */
                    std::vector<RunTimeFilters> GetFilters() const;

                    /**
                     * 设置Filter condition
<li>
Status- String - Required: No - Plugin status. Valid values: `INJECTING` (injecting); `SUCCESS` (injected successfully); `FAIL` (injection failed); `TIMEOUT` (plugin timed out); `QUIT` (plugin exited).
</li>
                     * @param _filters Filter condition
<li>
Status- String - Required: No - Plugin status. Valid values: `INJECTING` (injecting); `SUCCESS` (injected successfully); `FAIL` (injection failed); `TIMEOUT` (plugin timed out); `QUIT` (plugin exited).
</li>
                     * 
                     */
                    void SetFilters(const std::vector<RunTimeFilters>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                private:

                    /**
                     * Host ID or unique super node ID
                     */
                    std::string m_hostID;
                    bool m_hostIDHasBeenSet;

                    /**
                     * Number of results to be returned. Default value: `10`. Maximum value: `100`.
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Offset. Default value: `0`.
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Filter condition
<li>
Status- String - Required: No - Plugin status. Valid values: `INJECTING` (injecting); `SUCCESS` (injected successfully); `FAIL` (injection failed); `TIMEOUT` (plugin timed out); `QUIT` (plugin exited).
</li>
                     */
                    std::vector<RunTimeFilters> m_filters;
                    bool m_filtersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEVULDEFENCEPLUGINREQUEST_H_
