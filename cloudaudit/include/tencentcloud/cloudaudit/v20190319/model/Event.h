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

#ifndef TENCENTCLOUD_CLOUDAUDIT_V20190319_MODEL_EVENT_H_
#define TENCENTCLOUD_CLOUDAUDIT_V20190319_MODEL_EVENT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cloudaudit/v20190319/model/Resource.h>


namespace TencentCloud
{
    namespace Cloudaudit
    {
        namespace V20190319
        {
            namespace Model
            {
                /**
                * Log details
                */
                class Event : public AbstractModel
                {
                public:
                    Event();
                    ~Event() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Log ID
                     * @return EventId Log ID
                     * 
                     */
                    std::string GetEventId() const;

                    /**
                     * 设置Log ID
                     * @param _eventId Log ID
                     * 
                     */
                    void SetEventId(const std::string& _eventId);

                    /**
                     * 判断参数 EventId 是否已赋值
                     * @return EventId 是否已赋值
                     * 
                     */
                    bool EventIdHasBeenSet() const;

                    /**
                     * 获取Username
                     * @return Username Username
                     * 
                     */
                    std::string GetUsername() const;

                    /**
                     * 设置Username
                     * @param _username Username
                     * 
                     */
                    void SetUsername(const std::string& _username);

                    /**
                     * 判断参数 Username 是否已赋值
                     * @return Username 是否已赋值
                     * 
                     */
                    bool UsernameHasBeenSet() const;

                    /**
                     * 获取Event Time
                     * @return EventTime Event Time
                     * 
                     */
                    std::string GetEventTime() const;

                    /**
                     * 设置Event Time
                     * @param _eventTime Event Time
                     * 
                     */
                    void SetEventTime(const std::string& _eventTime);

                    /**
                     * 判断参数 EventTime 是否已赋值
                     * @return EventTime 是否已赋值
                     * 
                     */
                    bool EventTimeHasBeenSet() const;

                    /**
                     * 获取Log details
                     * @return CloudAuditEvent Log details
                     * 
                     */
                    std::string GetCloudAuditEvent() const;

                    /**
                     * 设置Log details
                     * @param _cloudAuditEvent Log details
                     * 
                     */
                    void SetCloudAuditEvent(const std::string& _cloudAuditEvent);

                    /**
                     * 判断参数 CloudAuditEvent 是否已赋值
                     * @return CloudAuditEvent 是否已赋值
                     * 
                     */
                    bool CloudAuditEventHasBeenSet() const;

                    /**
                     * 获取Description of resource type in Chinese (please use this field as required; if you are using other languages, ignore this field)
                     * @return ResourceTypeCn Description of resource type in Chinese (please use this field as required; if you are using other languages, ignore this field)
                     * 
                     */
                    std::string GetResourceTypeCn() const;

                    /**
                     * 设置Description of resource type in Chinese (please use this field as required; if you are using other languages, ignore this field)
                     * @param _resourceTypeCn Description of resource type in Chinese (please use this field as required; if you are using other languages, ignore this field)
                     * 
                     */
                    void SetResourceTypeCn(const std::string& _resourceTypeCn);

                    /**
                     * 判断参数 ResourceTypeCn 是否已赋值
                     * @return ResourceTypeCn 是否已赋值
                     * 
                     */
                    bool ResourceTypeCnHasBeenSet() const;

                    /**
                     * 获取Authentication error code
                     * @return ErrorCode Authentication error code
                     * 
                     */
                    int64_t GetErrorCode() const;

                    /**
                     * 设置Authentication error code
                     * @param _errorCode Authentication error code
                     * 
                     */
                    void SetErrorCode(const int64_t& _errorCode);

                    /**
                     * 判断参数 ErrorCode 是否已赋值
                     * @return ErrorCode 是否已赋值
                     * 
                     */
                    bool ErrorCodeHasBeenSet() const;

                    /**
                     * 获取Event name
                     * @return EventName Event name
                     * 
                     */
                    std::string GetEventName() const;

                    /**
                     * 设置Event name
                     * @param _eventName Event name
                     * 
                     */
                    void SetEventName(const std::string& _eventName);

                    /**
                     * 判断参数 EventName 是否已赋值
                     * @return EventName 是否已赋值
                     * 
                     */
                    bool EventNameHasBeenSet() const;

                    /**
                     * 获取Certificate ID
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     * @return SecretId Certificate ID
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetSecretId() const;

                    /**
                     * 设置Certificate ID
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     * @param _secretId Certificate ID
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetSecretId(const std::string& _secretId);

                    /**
                     * 判断参数 SecretId 是否已赋值
                     * @return SecretId 是否已赋值
                     * 
                     */
                    bool SecretIdHasBeenSet() const;

                    /**
                     * 获取Request source
                     * @return EventSource Request source
                     * 
                     */
                    std::string GetEventSource() const;

                    /**
                     * 设置Request source
                     * @param _eventSource Request source
                     * 
                     */
                    void SetEventSource(const std::string& _eventSource);

                    /**
                     * 判断参数 EventSource 是否已赋值
                     * @return EventSource 是否已赋值
                     * 
                     */
                    bool EventSourceHasBeenSet() const;

                    /**
                     * 获取Request ID
                     * @return RequestID Request ID
                     * 
                     */
                    std::string GetRequestID() const;

                    /**
                     * 设置Request ID
                     * @param _requestID Request ID
                     * 
                     */
                    void SetRequestID(const std::string& _requestID);

                    /**
                     * 判断参数 RequestID 是否已赋值
                     * @return RequestID 是否已赋值
                     * 
                     */
                    bool RequestIDHasBeenSet() const;

                    /**
                     * 获取Resource region
                     * @return ResourceRegion Resource region
                     * 
                     */
                    std::string GetResourceRegion() const;

                    /**
                     * 设置Resource region
                     * @param _resourceRegion Resource region
                     * 
                     */
                    void SetResourceRegion(const std::string& _resourceRegion);

                    /**
                     * 判断参数 ResourceRegion 是否已赋值
                     * @return ResourceRegion 是否已赋值
                     * 
                     */
                    bool ResourceRegionHasBeenSet() const;

                    /**
                     * 获取Root account ID
                     * @return AccountID Root account ID
                     * 
                     */
                    int64_t GetAccountID() const;

                    /**
                     * 设置Root account ID
                     * @param _accountID Root account ID
                     * 
                     */
                    void SetAccountID(const int64_t& _accountID);

                    /**
                     * 判断参数 AccountID 是否已赋值
                     * @return AccountID 是否已赋值
                     * 
                     */
                    bool AccountIDHasBeenSet() const;

                    /**
                     * 获取Source IP
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     * @return SourceIPAddress Source IP
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetSourceIPAddress() const;

                    /**
                     * 设置Source IP
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     * @param _sourceIPAddress Source IP
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetSourceIPAddress(const std::string& _sourceIPAddress);

                    /**
                     * 判断参数 SourceIPAddress 是否已赋值
                     * @return SourceIPAddress 是否已赋值
                     * 
                     */
                    bool SourceIPAddressHasBeenSet() const;

                    /**
                     * 获取Description of event name in Chinese (please use this field as required; if you are using other languages, ignore this field)
                     * @return EventNameCn Description of event name in Chinese (please use this field as required; if you are using other languages, ignore this field)
                     * 
                     */
                    std::string GetEventNameCn() const;

                    /**
                     * 设置Description of event name in Chinese (please use this field as required; if you are using other languages, ignore this field)
                     * @param _eventNameCn Description of event name in Chinese (please use this field as required; if you are using other languages, ignore this field)
                     * 
                     */
                    void SetEventNameCn(const std::string& _eventNameCn);

                    /**
                     * 判断参数 EventNameCn 是否已赋值
                     * @return EventNameCn 是否已赋值
                     * 
                     */
                    bool EventNameCnHasBeenSet() const;

                    /**
                     * 获取Resource pair
                     * @return Resources Resource pair
                     * 
                     */
                    Resource GetResources() const;

                    /**
                     * 设置Resource pair
                     * @param _resources Resource pair
                     * 
                     */
                    void SetResources(const Resource& _resources);

                    /**
                     * 判断参数 Resources 是否已赋值
                     * @return Resources 是否已赋值
                     * 
                     */
                    bool ResourcesHasBeenSet() const;

                    /**
                     * 获取Event region
                     * @return EventRegion Event region
                     * 
                     */
                    std::string GetEventRegion() const;

                    /**
                     * 设置Event region
                     * @param _eventRegion Event region
                     * 
                     */
                    void SetEventRegion(const std::string& _eventRegion);

                    /**
                     * 判断参数 EventRegion 是否已赋值
                     * @return EventRegion 是否已赋值
                     * 
                     */
                    bool EventRegionHasBeenSet() const;

                    /**
                     * 获取IP location
                     * @return Location IP location
                     * 
                     */
                    std::string GetLocation() const;

                    /**
                     * 设置IP location
                     * @param _location IP location
                     * 
                     */
                    void SetLocation(const std::string& _location);

                    /**
                     * 判断参数 Location 是否已赋值
                     * @return Location 是否已赋值
                     * 
                     */
                    bool LocationHasBeenSet() const;

                private:

                    /**
                     * Log ID
                     */
                    std::string m_eventId;
                    bool m_eventIdHasBeenSet;

                    /**
                     * Username
                     */
                    std::string m_username;
                    bool m_usernameHasBeenSet;

                    /**
                     * Event Time
                     */
                    std::string m_eventTime;
                    bool m_eventTimeHasBeenSet;

                    /**
                     * Log details
                     */
                    std::string m_cloudAuditEvent;
                    bool m_cloudAuditEventHasBeenSet;

                    /**
                     * Description of resource type in Chinese (please use this field as required; if you are using other languages, ignore this field)
                     */
                    std::string m_resourceTypeCn;
                    bool m_resourceTypeCnHasBeenSet;

                    /**
                     * Authentication error code
                     */
                    int64_t m_errorCode;
                    bool m_errorCodeHasBeenSet;

                    /**
                     * Event name
                     */
                    std::string m_eventName;
                    bool m_eventNameHasBeenSet;

                    /**
                     * Certificate ID
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     */
                    std::string m_secretId;
                    bool m_secretIdHasBeenSet;

                    /**
                     * Request source
                     */
                    std::string m_eventSource;
                    bool m_eventSourceHasBeenSet;

                    /**
                     * Request ID
                     */
                    std::string m_requestID;
                    bool m_requestIDHasBeenSet;

                    /**
                     * Resource region
                     */
                    std::string m_resourceRegion;
                    bool m_resourceRegionHasBeenSet;

                    /**
                     * Root account ID
                     */
                    int64_t m_accountID;
                    bool m_accountIDHasBeenSet;

                    /**
                     * Source IP
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     */
                    std::string m_sourceIPAddress;
                    bool m_sourceIPAddressHasBeenSet;

                    /**
                     * Description of event name in Chinese (please use this field as required; if you are using other languages, ignore this field)
                     */
                    std::string m_eventNameCn;
                    bool m_eventNameCnHasBeenSet;

                    /**
                     * Resource pair
                     */
                    Resource m_resources;
                    bool m_resourcesHasBeenSet;

                    /**
                     * Event region
                     */
                    std::string m_eventRegion;
                    bool m_eventRegionHasBeenSet;

                    /**
                     * IP location
                     */
                    std::string m_location;
                    bool m_locationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLOUDAUDIT_V20190319_MODEL_EVENT_H_
