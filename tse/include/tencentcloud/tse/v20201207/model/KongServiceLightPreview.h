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

#ifndef TENCENTCLOUD_TSE_V20201207_MODEL_KONGSERVICELIGHTPREVIEW_H_
#define TENCENTCLOUD_TSE_V20201207_MODEL_KONGSERVICELIGHTPREVIEW_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tse/v20201207/model/KongUpstreamInfo.h>


namespace TencentCloud
{
    namespace Tse
    {
        namespace V20201207
        {
            namespace Model
            {
                /**
                * Simple Preview Information of Cloud-Native Gateway Service
                */
                class KongServiceLightPreview : public AbstractModel
                {
                public:
                    KongServiceLightPreview();
                    ~KongServiceLightPreview() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取service ID
                     * @return ID service ID
                     * 
                     */
                    std::string GetID() const;

                    /**
                     * 设置service ID
                     * @param _iD service ID
                     * 
                     */
                    void SetID(const std::string& _iD);

                    /**
                     * 判断参数 ID 是否已赋值
                     * @return ID 是否已赋值
                     * 
                     */
                    bool IDHasBeenSet() const;

                    /**
                     * 获取Service name.
                     * @return Name Service name.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Service name.
                     * @param _name Service name.
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取backend configuration
                     * @return UpstreamInfo backend configuration
                     * 
                     */
                    KongUpstreamInfo GetUpstreamInfo() const;

                    /**
                     * 设置backend configuration
                     * @param _upstreamInfo backend configuration
                     * 
                     */
                    void SetUpstreamInfo(const KongUpstreamInfo& _upstreamInfo);

                    /**
                     * 判断参数 UpstreamInfo 是否已赋值
                     * @return UpstreamInfo 是否已赋值
                     * 
                     */
                    bool UpstreamInfoHasBeenSet() const;

                    /**
                     * 获取Backend type
                     * @return UpstreamType Backend type
                     * 
                     */
                    std::string GetUpstreamType() const;

                    /**
                     * 设置Backend type
                     * @param _upstreamType Backend type
                     * 
                     */
                    void SetUpstreamType(const std::string& _upstreamType);

                    /**
                     * 判断参数 UpstreamType 是否已赋值
                     * @return UpstreamType 是否已赋值
                     * 
                     */
                    bool UpstreamTypeHasBeenSet() const;

                    /**
                     * 获取Creation time.
                     * @return CreatedTime Creation time.
                     * 
                     */
                    std::string GetCreatedTime() const;

                    /**
                     * 设置Creation time.
                     * @param _createdTime Creation time.
                     * 
                     */
                    void SetCreatedTime(const std::string& _createdTime);

                    /**
                     * 判断参数 CreatedTime 是否已赋值
                     * @return CreatedTime 是否已赋值
                     * 
                     */
                    bool CreatedTimeHasBeenSet() const;

                    /**
                     * 获取request path
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Path request path
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetPath() const;

                    /**
                     * 设置request path
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _path request path
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetPath(const std::string& _path);

                    /**
                     * 判断参数 Path 是否已赋值
                     * @return Path 是否已赋值
                     * 
                     */
                    bool PathHasBeenSet() const;

                    /**
                     * 获取Backend protocol
                     * @return Protocol Backend protocol
                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置Backend protocol
                     * @param _protocol Backend protocol
                     * 
                     */
                    void SetProtocol(const std::string& _protocol);

                    /**
                     * 判断参数 Protocol 是否已赋值
                     * @return Protocol 是否已赋值
                     * 
                     */
                    bool ProtocolHasBeenSet() const;

                    /**
                     * 获取Number of retries.
                     * @return Retries Number of retries.
                     * 
                     */
                    uint64_t GetRetries() const;

                    /**
                     * 设置Number of retries.
                     * @param _retries Number of retries.
                     * 
                     */
                    void SetRetries(const uint64_t& _retries);

                    /**
                     * 判断参数 Retries 是否已赋值
                     * @return Retries 是否已赋值
                     * 
                     */
                    bool RetriesHasBeenSet() const;

                    /**
                     * 获取Backend delay in milliseconds
                     * @return Timeout Backend delay in milliseconds
                     * 
                     */
                    uint64_t GetTimeout() const;

                    /**
                     * 设置Backend delay in milliseconds
                     * @param _timeout Backend delay in milliseconds
                     * 
                     */
                    void SetTimeout(const uint64_t& _timeout);

                    /**
                     * 判断参数 Timeout 是否已赋值
                     * @return Timeout 是否已赋值
                     * 
                     */
                    bool TimeoutHasBeenSet() const;

                private:

                    /**
                     * service ID
                     */
                    std::string m_iD;
                    bool m_iDHasBeenSet;

                    /**
                     * Service name.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * backend configuration
                     */
                    KongUpstreamInfo m_upstreamInfo;
                    bool m_upstreamInfoHasBeenSet;

                    /**
                     * Backend type
                     */
                    std::string m_upstreamType;
                    bool m_upstreamTypeHasBeenSet;

                    /**
                     * Creation time.
                     */
                    std::string m_createdTime;
                    bool m_createdTimeHasBeenSet;

                    /**
                     * request path
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_path;
                    bool m_pathHasBeenSet;

                    /**
                     * Backend protocol
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * Number of retries.
                     */
                    uint64_t m_retries;
                    bool m_retriesHasBeenSet;

                    /**
                     * Backend delay in milliseconds
                     */
                    uint64_t m_timeout;
                    bool m_timeoutHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSE_V20201207_MODEL_KONGSERVICELIGHTPREVIEW_H_
