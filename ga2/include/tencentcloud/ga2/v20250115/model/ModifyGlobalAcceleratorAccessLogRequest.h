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

#ifndef TENCENTCLOUD_GA2_V20250115_MODEL_MODIFYGLOBALACCELERATORACCESSLOGREQUEST_H_
#define TENCENTCLOUD_GA2_V20250115_MODEL_MODIFYGLOBALACCELERATORACCESSLOGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ga2
    {
        namespace V20250115
        {
            namespace Model
            {
                /**
                * ModifyGlobalAcceleratorAccessLog request structure.
                */
                class ModifyGlobalAcceleratorAccessLogRequest : public AbstractModel
                {
                public:
                    ModifyGlobalAcceleratorAccessLogRequest();
                    ~ModifyGlobalAcceleratorAccessLogRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Unique Id of the log</p>
                     * @return LogPushTaskId <p>Unique Id of the log</p>
                     * 
                     */
                    std::string GetLogPushTaskId() const;

                    /**
                     * 设置<p>Unique Id of the log</p>
                     * @param _logPushTaskId <p>Unique Id of the log</p>
                     * 
                     */
                    void SetLogPushTaskId(const std::string& _logPushTaskId);

                    /**
                     * 判断参数 LogPushTaskId 是否已赋值
                     * @return LogPushTaskId 是否已赋值
                     * 
                     */
                    bool LogPushTaskIdHasBeenSet() const;

                    /**
                     * 获取<p>Unique Id of a GA instance.</p>
                     * @return GlobalAcceleratorId <p>Unique Id of a GA instance.</p>
                     * 
                     */
                    std::string GetGlobalAcceleratorId() const;

                    /**
                     * 设置<p>Unique Id of a GA instance.</p>
                     * @param _globalAcceleratorId <p>Unique Id of a GA instance.</p>
                     * 
                     */
                    void SetGlobalAcceleratorId(const std::string& _globalAcceleratorId);

                    /**
                     * 判断参数 GlobalAcceleratorId 是否已赋值
                     * @return GlobalAcceleratorId 是否已赋值
                     * 
                     */
                    bool GlobalAcceleratorIdHasBeenSet() const;

                    /**
                     * 获取<p>Log topic Id</p>
                     * @return CloudLogId <p>Log topic Id</p>
                     * 
                     */
                    std::string GetCloudLogId() const;

                    /**
                     * 设置<p>Log topic Id</p>
                     * @param _cloudLogId <p>Log topic Id</p>
                     * 
                     */
                    void SetCloudLogId(const std::string& _cloudLogId);

                    /**
                     * 判断参数 CloudLogId 是否已赋值
                     * @return CloudLogId 是否已赋值
                     * 
                     */
                    bool CloudLogIdHasBeenSet() const;

                    /**
                     * 获取<p>Log Set Id</p>
                     * @return CloudLogSetId <p>Log Set Id</p>
                     * 
                     */
                    std::string GetCloudLogSetId() const;

                    /**
                     * 设置<p>Log Set Id</p>
                     * @param _cloudLogSetId <p>Log Set Id</p>
                     * 
                     */
                    void SetCloudLogSetId(const std::string& _cloudLogSetId);

                    /**
                     * 判断参数 CloudLogSetId 是否已赋值
                     * @return CloudLogSetId 是否已赋值
                     * 
                     */
                    bool CloudLogSetIdHasBeenSet() const;

                    /**
                     * 获取<p>user-selectable log listening fields</p><p>Enumeration values:</p><ul><li>session_time: Layer 4, session duration</li><li>upstream_bytes_received: Layer 4 and Layer 7, number of bytes received from the terminal node</li><li>upstream_bytes_sent: Layer 4 and Layer 7, number of bytes sent to the terminal node</li><li>request_method: Layer 7, GET/POST</li><li>scheme: Layer 7, http/https</li><li>request_uri: Layer 7, uri of the client's original request</li><li>uri: Layer 7, uri of the current request</li><li>host: Layer 7, domain name accessed by the client (Layer 7)</li><li>remote_user: Layer 7, username for basic authentication ("-" if unauthenticated)</li><li>http_user_agent: Layer 7, client browser identification</li><li>http_referer: Layer 7, request source URL ("-" when accessed directly from the address bar)</li><li>http_x_forwarded_for: Layer 7, records the client's original IP and the chain of proxy server IPs it transited</li><li>content_type: Layer 7, content_type</li><li>body_bytes_sent: Layer 7, http body size sent to the client, excluding the header</li><li>request_time: Layer 7, total time from receiving the first byte of the client request to sending the last byte of the response (unit: seconds)</li><li>sent_http_content_type: Layer 7, response content type</li><li>upstream_header_time: Layer 7, arrival time of the response header from the terminal node</li><li>upstream_response_length: Layer 7, response body length returned by the terminal node</li><li>upstream_response_time: Layer 7, full response time of the terminal node</li><li>upstream_status: Layer 7, http status code returned by the terminal node</li></ul>
                     * @return FieldKeys <p>user-selectable log listening fields</p><p>Enumeration values:</p><ul><li>session_time: Layer 4, session duration</li><li>upstream_bytes_received: Layer 4 and Layer 7, number of bytes received from the terminal node</li><li>upstream_bytes_sent: Layer 4 and Layer 7, number of bytes sent to the terminal node</li><li>request_method: Layer 7, GET/POST</li><li>scheme: Layer 7, http/https</li><li>request_uri: Layer 7, uri of the client's original request</li><li>uri: Layer 7, uri of the current request</li><li>host: Layer 7, domain name accessed by the client (Layer 7)</li><li>remote_user: Layer 7, username for basic authentication ("-" if unauthenticated)</li><li>http_user_agent: Layer 7, client browser identification</li><li>http_referer: Layer 7, request source URL ("-" when accessed directly from the address bar)</li><li>http_x_forwarded_for: Layer 7, records the client's original IP and the chain of proxy server IPs it transited</li><li>content_type: Layer 7, content_type</li><li>body_bytes_sent: Layer 7, http body size sent to the client, excluding the header</li><li>request_time: Layer 7, total time from receiving the first byte of the client request to sending the last byte of the response (unit: seconds)</li><li>sent_http_content_type: Layer 7, response content type</li><li>upstream_header_time: Layer 7, arrival time of the response header from the terminal node</li><li>upstream_response_length: Layer 7, response body length returned by the terminal node</li><li>upstream_response_time: Layer 7, full response time of the terminal node</li><li>upstream_status: Layer 7, http status code returned by the terminal node</li></ul>
                     * 
                     */
                    std::vector<std::string> GetFieldKeys() const;

                    /**
                     * 设置<p>user-selectable log listening fields</p><p>Enumeration values:</p><ul><li>session_time: Layer 4, session duration</li><li>upstream_bytes_received: Layer 4 and Layer 7, number of bytes received from the terminal node</li><li>upstream_bytes_sent: Layer 4 and Layer 7, number of bytes sent to the terminal node</li><li>request_method: Layer 7, GET/POST</li><li>scheme: Layer 7, http/https</li><li>request_uri: Layer 7, uri of the client's original request</li><li>uri: Layer 7, uri of the current request</li><li>host: Layer 7, domain name accessed by the client (Layer 7)</li><li>remote_user: Layer 7, username for basic authentication ("-" if unauthenticated)</li><li>http_user_agent: Layer 7, client browser identification</li><li>http_referer: Layer 7, request source URL ("-" when accessed directly from the address bar)</li><li>http_x_forwarded_for: Layer 7, records the client's original IP and the chain of proxy server IPs it transited</li><li>content_type: Layer 7, content_type</li><li>body_bytes_sent: Layer 7, http body size sent to the client, excluding the header</li><li>request_time: Layer 7, total time from receiving the first byte of the client request to sending the last byte of the response (unit: seconds)</li><li>sent_http_content_type: Layer 7, response content type</li><li>upstream_header_time: Layer 7, arrival time of the response header from the terminal node</li><li>upstream_response_length: Layer 7, response body length returned by the terminal node</li><li>upstream_response_time: Layer 7, full response time of the terminal node</li><li>upstream_status: Layer 7, http status code returned by the terminal node</li></ul>
                     * @param _fieldKeys <p>user-selectable log listening fields</p><p>Enumeration values:</p><ul><li>session_time: Layer 4, session duration</li><li>upstream_bytes_received: Layer 4 and Layer 7, number of bytes received from the terminal node</li><li>upstream_bytes_sent: Layer 4 and Layer 7, number of bytes sent to the terminal node</li><li>request_method: Layer 7, GET/POST</li><li>scheme: Layer 7, http/https</li><li>request_uri: Layer 7, uri of the client's original request</li><li>uri: Layer 7, uri of the current request</li><li>host: Layer 7, domain name accessed by the client (Layer 7)</li><li>remote_user: Layer 7, username for basic authentication ("-" if unauthenticated)</li><li>http_user_agent: Layer 7, client browser identification</li><li>http_referer: Layer 7, request source URL ("-" when accessed directly from the address bar)</li><li>http_x_forwarded_for: Layer 7, records the client's original IP and the chain of proxy server IPs it transited</li><li>content_type: Layer 7, content_type</li><li>body_bytes_sent: Layer 7, http body size sent to the client, excluding the header</li><li>request_time: Layer 7, total time from receiving the first byte of the client request to sending the last byte of the response (unit: seconds)</li><li>sent_http_content_type: Layer 7, response content type</li><li>upstream_header_time: Layer 7, arrival time of the response header from the terminal node</li><li>upstream_response_length: Layer 7, response body length returned by the terminal node</li><li>upstream_response_time: Layer 7, full response time of the terminal node</li><li>upstream_status: Layer 7, http status code returned by the terminal node</li></ul>
                     * 
                     */
                    void SetFieldKeys(const std::vector<std::string>& _fieldKeys);

                    /**
                     * 判断参数 FieldKeys 是否已赋值
                     * @return FieldKeys 是否已赋值
                     * 
                     */
                    bool FieldKeysHasBeenSet() const;

                    /**
                     * 获取<p>Log description</p>
                     * @return FlowLogDescription <p>Log description</p>
                     * 
                     */
                    std::string GetFlowLogDescription() const;

                    /**
                     * 设置<p>Log description</p>
                     * @param _flowLogDescription <p>Log description</p>
                     * 
                     */
                    void SetFlowLogDescription(const std::string& _flowLogDescription);

                    /**
                     * 判断参数 FlowLogDescription 是否已赋值
                     * @return FlowLogDescription 是否已赋值
                     * 
                     */
                    bool FlowLogDescriptionHasBeenSet() const;

                private:

                    /**
                     * <p>Unique Id of the log</p>
                     */
                    std::string m_logPushTaskId;
                    bool m_logPushTaskIdHasBeenSet;

                    /**
                     * <p>Unique Id of a GA instance.</p>
                     */
                    std::string m_globalAcceleratorId;
                    bool m_globalAcceleratorIdHasBeenSet;

                    /**
                     * <p>Log topic Id</p>
                     */
                    std::string m_cloudLogId;
                    bool m_cloudLogIdHasBeenSet;

                    /**
                     * <p>Log Set Id</p>
                     */
                    std::string m_cloudLogSetId;
                    bool m_cloudLogSetIdHasBeenSet;

                    /**
                     * <p>user-selectable log listening fields</p><p>Enumeration values:</p><ul><li>session_time: Layer 4, session duration</li><li>upstream_bytes_received: Layer 4 and Layer 7, number of bytes received from the terminal node</li><li>upstream_bytes_sent: Layer 4 and Layer 7, number of bytes sent to the terminal node</li><li>request_method: Layer 7, GET/POST</li><li>scheme: Layer 7, http/https</li><li>request_uri: Layer 7, uri of the client's original request</li><li>uri: Layer 7, uri of the current request</li><li>host: Layer 7, domain name accessed by the client (Layer 7)</li><li>remote_user: Layer 7, username for basic authentication ("-" if unauthenticated)</li><li>http_user_agent: Layer 7, client browser identification</li><li>http_referer: Layer 7, request source URL ("-" when accessed directly from the address bar)</li><li>http_x_forwarded_for: Layer 7, records the client's original IP and the chain of proxy server IPs it transited</li><li>content_type: Layer 7, content_type</li><li>body_bytes_sent: Layer 7, http body size sent to the client, excluding the header</li><li>request_time: Layer 7, total time from receiving the first byte of the client request to sending the last byte of the response (unit: seconds)</li><li>sent_http_content_type: Layer 7, response content type</li><li>upstream_header_time: Layer 7, arrival time of the response header from the terminal node</li><li>upstream_response_length: Layer 7, response body length returned by the terminal node</li><li>upstream_response_time: Layer 7, full response time of the terminal node</li><li>upstream_status: Layer 7, http status code returned by the terminal node</li></ul>
                     */
                    std::vector<std::string> m_fieldKeys;
                    bool m_fieldKeysHasBeenSet;

                    /**
                     * <p>Log description</p>
                     */
                    std::string m_flowLogDescription;
                    bool m_flowLogDescriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GA2_V20250115_MODEL_MODIFYGLOBALACCELERATORACCESSLOGREQUEST_H_
