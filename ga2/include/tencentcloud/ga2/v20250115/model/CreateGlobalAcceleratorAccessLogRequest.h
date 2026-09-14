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

#ifndef TENCENTCLOUD_GA2_V20250115_MODEL_CREATEGLOBALACCELERATORACCESSLOGREQUEST_H_
#define TENCENTCLOUD_GA2_V20250115_MODEL_CREATEGLOBALACCELERATORACCESSLOGREQUEST_H_

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
                * CreateGlobalAcceleratorAccessLog request structure.
                */
                class CreateGlobalAcceleratorAccessLogRequest : public AbstractModel
                {
                public:
                    CreateGlobalAcceleratorAccessLogRequest();
                    ~CreateGlobalAcceleratorAccessLogRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Unique Id of the sample GA</p>
                     * @return GlobalAcceleratorId <p>Unique Id of the sample GA</p>
                     * 
                     */
                    std::string GetGlobalAcceleratorId() const;

                    /**
                     * 设置<p>Unique Id of the sample GA</p>
                     * @param _globalAcceleratorId <p>Unique Id of the sample GA</p>
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
                     * 获取<p>Listener Id</p>
                     * @return ListenerId <p>Listener Id</p>
                     * 
                     */
                    std::string GetListenerId() const;

                    /**
                     * 设置<p>Listener Id</p>
                     * @param _listenerId <p>Listener Id</p>
                     * 
                     */
                    void SetListenerId(const std::string& _listenerId);

                    /**
                     * 判断参数 ListenerId 是否已赋值
                     * @return ListenerId 是否已赋值
                     * 
                     */
                    bool ListenerIdHasBeenSet() const;

                    /**
                     * 获取<p>Terminal node group Id</p>
                     * @return EndpointGroupId <p>Terminal node group Id</p>
                     * 
                     */
                    std::string GetEndpointGroupId() const;

                    /**
                     * 设置<p>Terminal node group Id</p>
                     * @param _endpointGroupId <p>Terminal node group Id</p>
                     * 
                     */
                    void SetEndpointGroupId(const std::string& _endpointGroupId);

                    /**
                     * 判断参数 EndpointGroupId 是否已赋值
                     * @return EndpointGroupId 是否已赋值
                     * 
                     */
                    bool EndpointGroupIdHasBeenSet() const;

                    /**
                     * 获取<p>Logset region</p>
                     * @return CloudRegion <p>Logset region</p>
                     * 
                     */
                    std::string GetCloudRegion() const;

                    /**
                     * 设置<p>Logset region</p>
                     * @param _cloudRegion <p>Logset region</p>
                     * 
                     */
                    void SetCloudRegion(const std::string& _cloudRegion);

                    /**
                     * 判断参数 CloudRegion 是否已赋值
                     * @return CloudRegion 是否已赋值
                     * 
                     */
                    bool CloudRegionHasBeenSet() const;

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
                     * 获取<p>Specify data collection fields</p><p>Enumeration values:</p><ul><li>session_time: Layer 4, session duration</li><li>upstream_bytes_received: Layer 4 and Layer 7, number of bytes received from the terminal node</li><li>upstream_bytes_sent: Layer 4 and Layer 7, number of bytes sent to the terminal node</li><li>request_method: Layer 7, GET/POST</li><li>scheme: Layer 7, http/https</li><li>request_uri: Layer 7, uri of the client's raw request</li><li>uri: Layer 7, uri of the current request</li><li>host: Layer 7, domain name accessed by the client (Layer 7)</li><li>remote_user: Layer 7, userName for basic authentication ("-" when unauthenticated)</li><li>http_user_agent: Layer 7, client browser identification</li><li>http_referer: Layer 7, request source URL ("-" when accessed directly from the address bar)</li><li>http_x_forwarded_for: Layer 7, records the client's original IP and the proxy server IP chain it transited</li><li>content_type: Layer 7, content_type</li><li>body_bytes_sent: Layer 7, http body size sent to the client, excluding the header</li><li>request_time: Layer 7, total time from receiving the first byte of the client request to sending the last byte of the response (unit: seconds)</li><li>sent_http_content_type: Layer 7, response content type</li><li>upstream_header_time: Layer 7, arrival time of the terminal node's response header</li><li>upstream_response_length: Layer 7, length of the response body returned by the terminal node</li><li>upstream_response_time: Layer 7, complete response time of the terminal node</li><li>upstream_status: Layer 7, http status code returned by the terminal node</li></ul>
                     * @return FieldKeys <p>Specify data collection fields</p><p>Enumeration values:</p><ul><li>session_time: Layer 4, session duration</li><li>upstream_bytes_received: Layer 4 and Layer 7, number of bytes received from the terminal node</li><li>upstream_bytes_sent: Layer 4 and Layer 7, number of bytes sent to the terminal node</li><li>request_method: Layer 7, GET/POST</li><li>scheme: Layer 7, http/https</li><li>request_uri: Layer 7, uri of the client's raw request</li><li>uri: Layer 7, uri of the current request</li><li>host: Layer 7, domain name accessed by the client (Layer 7)</li><li>remote_user: Layer 7, userName for basic authentication ("-" when unauthenticated)</li><li>http_user_agent: Layer 7, client browser identification</li><li>http_referer: Layer 7, request source URL ("-" when accessed directly from the address bar)</li><li>http_x_forwarded_for: Layer 7, records the client's original IP and the proxy server IP chain it transited</li><li>content_type: Layer 7, content_type</li><li>body_bytes_sent: Layer 7, http body size sent to the client, excluding the header</li><li>request_time: Layer 7, total time from receiving the first byte of the client request to sending the last byte of the response (unit: seconds)</li><li>sent_http_content_type: Layer 7, response content type</li><li>upstream_header_time: Layer 7, arrival time of the terminal node's response header</li><li>upstream_response_length: Layer 7, length of the response body returned by the terminal node</li><li>upstream_response_time: Layer 7, complete response time of the terminal node</li><li>upstream_status: Layer 7, http status code returned by the terminal node</li></ul>
                     * 
                     */
                    std::vector<std::string> GetFieldKeys() const;

                    /**
                     * 设置<p>Specify data collection fields</p><p>Enumeration values:</p><ul><li>session_time: Layer 4, session duration</li><li>upstream_bytes_received: Layer 4 and Layer 7, number of bytes received from the terminal node</li><li>upstream_bytes_sent: Layer 4 and Layer 7, number of bytes sent to the terminal node</li><li>request_method: Layer 7, GET/POST</li><li>scheme: Layer 7, http/https</li><li>request_uri: Layer 7, uri of the client's raw request</li><li>uri: Layer 7, uri of the current request</li><li>host: Layer 7, domain name accessed by the client (Layer 7)</li><li>remote_user: Layer 7, userName for basic authentication ("-" when unauthenticated)</li><li>http_user_agent: Layer 7, client browser identification</li><li>http_referer: Layer 7, request source URL ("-" when accessed directly from the address bar)</li><li>http_x_forwarded_for: Layer 7, records the client's original IP and the proxy server IP chain it transited</li><li>content_type: Layer 7, content_type</li><li>body_bytes_sent: Layer 7, http body size sent to the client, excluding the header</li><li>request_time: Layer 7, total time from receiving the first byte of the client request to sending the last byte of the response (unit: seconds)</li><li>sent_http_content_type: Layer 7, response content type</li><li>upstream_header_time: Layer 7, arrival time of the terminal node's response header</li><li>upstream_response_length: Layer 7, length of the response body returned by the terminal node</li><li>upstream_response_time: Layer 7, complete response time of the terminal node</li><li>upstream_status: Layer 7, http status code returned by the terminal node</li></ul>
                     * @param _fieldKeys <p>Specify data collection fields</p><p>Enumeration values:</p><ul><li>session_time: Layer 4, session duration</li><li>upstream_bytes_received: Layer 4 and Layer 7, number of bytes received from the terminal node</li><li>upstream_bytes_sent: Layer 4 and Layer 7, number of bytes sent to the terminal node</li><li>request_method: Layer 7, GET/POST</li><li>scheme: Layer 7, http/https</li><li>request_uri: Layer 7, uri of the client's raw request</li><li>uri: Layer 7, uri of the current request</li><li>host: Layer 7, domain name accessed by the client (Layer 7)</li><li>remote_user: Layer 7, userName for basic authentication ("-" when unauthenticated)</li><li>http_user_agent: Layer 7, client browser identification</li><li>http_referer: Layer 7, request source URL ("-" when accessed directly from the address bar)</li><li>http_x_forwarded_for: Layer 7, records the client's original IP and the proxy server IP chain it transited</li><li>content_type: Layer 7, content_type</li><li>body_bytes_sent: Layer 7, http body size sent to the client, excluding the header</li><li>request_time: Layer 7, total time from receiving the first byte of the client request to sending the last byte of the response (unit: seconds)</li><li>sent_http_content_type: Layer 7, response content type</li><li>upstream_header_time: Layer 7, arrival time of the terminal node's response header</li><li>upstream_response_length: Layer 7, length of the response body returned by the terminal node</li><li>upstream_response_time: Layer 7, complete response time of the terminal node</li><li>upstream_status: Layer 7, http status code returned by the terminal node</li></ul>
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
                     * <p>Unique Id of the sample GA</p>
                     */
                    std::string m_globalAcceleratorId;
                    bool m_globalAcceleratorIdHasBeenSet;

                    /**
                     * <p>Listener Id</p>
                     */
                    std::string m_listenerId;
                    bool m_listenerIdHasBeenSet;

                    /**
                     * <p>Terminal node group Id</p>
                     */
                    std::string m_endpointGroupId;
                    bool m_endpointGroupIdHasBeenSet;

                    /**
                     * <p>Logset region</p>
                     */
                    std::string m_cloudRegion;
                    bool m_cloudRegionHasBeenSet;

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
                     * <p>Specify data collection fields</p><p>Enumeration values:</p><ul><li>session_time: Layer 4, session duration</li><li>upstream_bytes_received: Layer 4 and Layer 7, number of bytes received from the terminal node</li><li>upstream_bytes_sent: Layer 4 and Layer 7, number of bytes sent to the terminal node</li><li>request_method: Layer 7, GET/POST</li><li>scheme: Layer 7, http/https</li><li>request_uri: Layer 7, uri of the client's raw request</li><li>uri: Layer 7, uri of the current request</li><li>host: Layer 7, domain name accessed by the client (Layer 7)</li><li>remote_user: Layer 7, userName for basic authentication ("-" when unauthenticated)</li><li>http_user_agent: Layer 7, client browser identification</li><li>http_referer: Layer 7, request source URL ("-" when accessed directly from the address bar)</li><li>http_x_forwarded_for: Layer 7, records the client's original IP and the proxy server IP chain it transited</li><li>content_type: Layer 7, content_type</li><li>body_bytes_sent: Layer 7, http body size sent to the client, excluding the header</li><li>request_time: Layer 7, total time from receiving the first byte of the client request to sending the last byte of the response (unit: seconds)</li><li>sent_http_content_type: Layer 7, response content type</li><li>upstream_header_time: Layer 7, arrival time of the terminal node's response header</li><li>upstream_response_length: Layer 7, length of the response body returned by the terminal node</li><li>upstream_response_time: Layer 7, complete response time of the terminal node</li><li>upstream_status: Layer 7, http status code returned by the terminal node</li></ul>
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

#endif // !TENCENTCLOUD_GA2_V20250115_MODEL_CREATEGLOBALACCELERATORACCESSLOGREQUEST_H_
