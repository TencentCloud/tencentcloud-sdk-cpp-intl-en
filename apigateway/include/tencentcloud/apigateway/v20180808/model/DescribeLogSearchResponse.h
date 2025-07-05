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

#ifndef TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_DESCRIBELOGSEARCHRESPONSE_H_
#define TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_DESCRIBELOGSEARCHRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Apigateway
    {
        namespace V20180808
        {
            namespace Model
            {
                /**
                * DescribeLogSearch response structure.
                */
                class DescribeLogSearchResponse : public AbstractModel
                {
                public:
                    DescribeLogSearchResponse();
                    ~DescribeLogSearchResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Cursor for getting more search results. If the value is `""`, there will be no subsequent results
                     * @return ConText Cursor for getting more search results. If the value is `""`, there will be no subsequent results
                     * 
                     */
                    std::string GetConText() const;

                    /**
                     * 判断参数 ConText 是否已赋值
                     * @return ConText 是否已赋值
                     * 
                     */
                    bool ConTextHasBeenSet() const;

                    /**
                     * 获取The returned result contains any number of logs, which are in the following format:
'[$app_id][$env_name][$service_id][$http_host][$api_id][$uri][$scheme][rsp_st:$status][ups_st:$upstream_status]'
'[cip:$remote_addr][uip:$upstream_addr][vip:$server_addr][rsp_len:$bytes_sent][req_len:$request_length]'
'[req_t:$request_time][ups_rsp_t:$upstream_response_time][ups_conn_t:$upstream_connect_time][ups_head_t:$upstream_header_time]’
'[err_msg:$err_msg][tcp_rtt:$tcpinfo_rtt][$pid][$time_local][req_id:$request_id]';

Note:
app_id: user ID.
env_name: environment name.
service_id: service ID.
http_host: domain name.
api_id: API ID.
uri: request path.
scheme: HTTP/HTTPS protocol.
rsp_st: request response status code.
ups_st: backend business server response status code (if the request is passed through to the backend, this variable will not be empty. If the request is blocked in API Gateway, this variable will be displayed as `-`).
cip: client IP.
uip: backend business service (upstream) IP.
vip: VIP requested to be accessed.
rsp_len: response length.
req_len: request length.
req_t: total request response time.
ups_rsp_t: total backend response time (time between connection establishment by API Gateway and backend response receipt).
ups_conn_t: time when the backend business server is successfully connected to.
ups_head_t: time when the backend response header arrives.
err_msg: error message.
tcp_rtt: client TCP connection information. RTT (Round Trip Time) consists of three parts: link propagation delay, end system processing delay, and queuing delay in router cache.
req_id: request ID.
                     * @return LogSet The returned result contains any number of logs, which are in the following format:
'[$app_id][$env_name][$service_id][$http_host][$api_id][$uri][$scheme][rsp_st:$status][ups_st:$upstream_status]'
'[cip:$remote_addr][uip:$upstream_addr][vip:$server_addr][rsp_len:$bytes_sent][req_len:$request_length]'
'[req_t:$request_time][ups_rsp_t:$upstream_response_time][ups_conn_t:$upstream_connect_time][ups_head_t:$upstream_header_time]’
'[err_msg:$err_msg][tcp_rtt:$tcpinfo_rtt][$pid][$time_local][req_id:$request_id]';

Note:
app_id: user ID.
env_name: environment name.
service_id: service ID.
http_host: domain name.
api_id: API ID.
uri: request path.
scheme: HTTP/HTTPS protocol.
rsp_st: request response status code.
ups_st: backend business server response status code (if the request is passed through to the backend, this variable will not be empty. If the request is blocked in API Gateway, this variable will be displayed as `-`).
cip: client IP.
uip: backend business service (upstream) IP.
vip: VIP requested to be accessed.
rsp_len: response length.
req_len: request length.
req_t: total request response time.
ups_rsp_t: total backend response time (time between connection establishment by API Gateway and backend response receipt).
ups_conn_t: time when the backend business server is successfully connected to.
ups_head_t: time when the backend response header arrives.
err_msg: error message.
tcp_rtt: client TCP connection information. RTT (Round Trip Time) consists of three parts: link propagation delay, end system processing delay, and queuing delay in router cache.
req_id: request ID.
                     * 
                     */
                    std::vector<std::string> GetLogSet() const;

                    /**
                     * 判断参数 LogSet 是否已赋值
                     * @return LogSet 是否已赋值
                     * 
                     */
                    bool LogSetHasBeenSet() const;

                    /**
                     * 获取Number of logs returned for one search (`TotalCount <= Limit`)
                     * @return TotalCount Number of logs returned for one search (`TotalCount <= Limit`)
                     * 
                     */
                    uint64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                private:

                    /**
                     * Cursor for getting more search results. If the value is `""`, there will be no subsequent results
                     */
                    std::string m_conText;
                    bool m_conTextHasBeenSet;

                    /**
                     * The returned result contains any number of logs, which are in the following format:
'[$app_id][$env_name][$service_id][$http_host][$api_id][$uri][$scheme][rsp_st:$status][ups_st:$upstream_status]'
'[cip:$remote_addr][uip:$upstream_addr][vip:$server_addr][rsp_len:$bytes_sent][req_len:$request_length]'
'[req_t:$request_time][ups_rsp_t:$upstream_response_time][ups_conn_t:$upstream_connect_time][ups_head_t:$upstream_header_time]’
'[err_msg:$err_msg][tcp_rtt:$tcpinfo_rtt][$pid][$time_local][req_id:$request_id]';

Note:
app_id: user ID.
env_name: environment name.
service_id: service ID.
http_host: domain name.
api_id: API ID.
uri: request path.
scheme: HTTP/HTTPS protocol.
rsp_st: request response status code.
ups_st: backend business server response status code (if the request is passed through to the backend, this variable will not be empty. If the request is blocked in API Gateway, this variable will be displayed as `-`).
cip: client IP.
uip: backend business service (upstream) IP.
vip: VIP requested to be accessed.
rsp_len: response length.
req_len: request length.
req_t: total request response time.
ups_rsp_t: total backend response time (time between connection establishment by API Gateway and backend response receipt).
ups_conn_t: time when the backend business server is successfully connected to.
ups_head_t: time when the backend response header arrives.
err_msg: error message.
tcp_rtt: client TCP connection information. RTT (Round Trip Time) consists of three parts: link propagation delay, end system processing delay, and queuing delay in router cache.
req_id: request ID.
                     */
                    std::vector<std::string> m_logSet;
                    bool m_logSetHasBeenSet;

                    /**
                     * Number of logs returned for one search (`TotalCount <= Limit`)
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_DESCRIBELOGSEARCHRESPONSE_H_
