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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_SPEEDTESTINGSTATUS_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_SPEEDTESTINGSTATUS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * The test task status
                */
                class SpeedTestingStatus : public AbstractModel
                {
                public:
                    SpeedTestingStatus();
                    ~SpeedTestingStatus() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The URL.
                     * @return Url The URL.
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置The URL.
                     * @param _url The URL.
                     * 
                     */
                    void SetUrl(const std::string& _url);

                    /**
                     * 判断参数 Url 是否已赋值
                     * @return Url 是否已赋值
                     * 
                     */
                    bool UrlHasBeenSet() const;

                    /**
                     * 获取Whether the URL uses HTTPS.
                     * @return Tls Whether the URL uses HTTPS.
                     * 
                     */
                    bool GetTls() const;

                    /**
                     * 设置Whether the URL uses HTTPS.
                     * @param _tls Whether the URL uses HTTPS.
                     * 
                     */
                    void SetTls(const bool& _tls);

                    /**
                     * 判断参数 Tls 是否已赋值
                     * @return Tls 是否已赋值
                     * 
                     */
                    bool TlsHasBeenSet() const;

                    /**
                     * 获取Creation time of the task.
                     * @return CreatedOn Creation time of the task.
                     * 
                     */
                    std::string GetCreatedOn() const;

                    /**
                     * 设置Creation time of the task.
                     * @param _createdOn Creation time of the task.
                     * 
                     */
                    void SetCreatedOn(const std::string& _createdOn);

                    /**
                     * 判断参数 CreatedOn 是否已赋值
                     * @return CreatedOn 是否已赋值
                     * 
                     */
                    bool CreatedOnHasBeenSet() const;

                    /**
                     * 获取The task status. Values:
<li>`200`: The task completed.</li>
<li>`100`: The task is running.</li>
<li>`503`: The task failed./li>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return StatusCode The task status. Values:
<li>`200`: The task completed.</li>
<li>`100`: The task is running.</li>
<li>`503`: The task failed./li>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetStatusCode() const;

                    /**
                     * 设置The task status. Values:
<li>`200`: The task completed.</li>
<li>`100`: The task is running.</li>
<li>`503`: The task failed./li>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _statusCode The task status. Values:
<li>`200`: The task completed.</li>
<li>`100`: The task is running.</li>
<li>`503`: The task failed./li>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetStatusCode(const int64_t& _statusCode);

                    /**
                     * 判断参数 StatusCode 是否已赋值
                     * @return StatusCode 是否已赋值
                     * 
                     */
                    bool StatusCodeHasBeenSet() const;

                    /**
                     * 获取The user agent.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return UA The user agent.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetUA() const;

                    /**
                     * 设置The user agent.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _uA The user agent.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetUA(const std::string& _uA);

                    /**
                     * 判断参数 UA 是否已赋值
                     * @return UA 是否已赋值
                     * 
                     */
                    bool UAHasBeenSet() const;

                    /**
                     * 获取The network environment.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Connectivity The network environment.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetConnectivity() const;

                    /**
                     * 设置The network environment.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _connectivity The network environment.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetConnectivity(const std::string& _connectivity);

                    /**
                     * 判断参数 Connectivity 是否已赋值
                     * @return Connectivity 是否已赋值
                     * 
                     */
                    bool ConnectivityHasBeenSet() const;

                    /**
                     * 获取Whether the URL is reachable. Values:
<li>`true`: Yes</li>
<li>`false`: No</li>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Reachable Whether the URL is reachable. Values:
<li>`true`: Yes</li>
<li>`false`: No</li>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    bool GetReachable() const;

                    /**
                     * 设置Whether the URL is reachable. Values:
<li>`true`: Yes</li>
<li>`false`: No</li>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _reachable Whether the URL is reachable. Values:
<li>`true`: Yes</li>
<li>`false`: No</li>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetReachable(const bool& _reachable);

                    /**
                     * 判断参数 Reachable 是否已赋值
                     * @return Reachable 是否已赋值
                     * 
                     */
                    bool ReachableHasBeenSet() const;

                    /**
                     * 获取Whether the URL connection timed out. Values:
<li>`true`: Yes</li>
<li>`false`: No</li>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TimedOut Whether the URL connection timed out. Values:
<li>`true`: Yes</li>
<li>`false`: No</li>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    bool GetTimedOut() const;

                    /**
                     * 设置Whether the URL connection timed out. Values:
<li>`true`: Yes</li>
<li>`false`: No</li>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _timedOut Whether the URL connection timed out. Values:
<li>`true`: Yes</li>
<li>`false`: No</li>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTimedOut(const bool& _timedOut);

                    /**
                     * 判断参数 TimedOut 是否已赋值
                     * @return TimedOut 是否已赋值
                     * 
                     */
                    bool TimedOutHasBeenSet() const;

                private:

                    /**
                     * The URL.
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * Whether the URL uses HTTPS.
                     */
                    bool m_tls;
                    bool m_tlsHasBeenSet;

                    /**
                     * Creation time of the task.
                     */
                    std::string m_createdOn;
                    bool m_createdOnHasBeenSet;

                    /**
                     * The task status. Values:
<li>`200`: The task completed.</li>
<li>`100`: The task is running.</li>
<li>`503`: The task failed./li>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_statusCode;
                    bool m_statusCodeHasBeenSet;

                    /**
                     * The user agent.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_uA;
                    bool m_uAHasBeenSet;

                    /**
                     * The network environment.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_connectivity;
                    bool m_connectivityHasBeenSet;

                    /**
                     * Whether the URL is reachable. Values:
<li>`true`: Yes</li>
<li>`false`: No</li>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    bool m_reachable;
                    bool m_reachableHasBeenSet;

                    /**
                     * Whether the URL connection timed out. Values:
<li>`true`: Yes</li>
<li>`false`: No</li>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    bool m_timedOut;
                    bool m_timedOutHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_SPEEDTESTINGSTATUS_H_
