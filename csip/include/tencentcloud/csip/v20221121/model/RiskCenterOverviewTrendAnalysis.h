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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_RISKCENTEROVERVIEWTRENDANALYSIS_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_RISKCENTEROVERVIEWTRENDANALYSIS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * Risk trend
                */
                class RiskCenterOverviewTrendAnalysis : public AbstractModel
                {
                public:
                    RiskCenterOverviewTrendAnalysis();
                    ~RiskCenterOverviewTrendAnalysis() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Date
                     * @return Date Date
                     * 
                     */
                    std::string GetDate() const;

                    /**
                     * 设置Date
                     * @param _date Date
                     * 
                     */
                    void SetDate(const std::string& _date);

                    /**
                     * 判断参数 Date 是否已赋值
                     * @return Date 是否已赋值
                     * 
                     */
                    bool DateHasBeenSet() const;

                    /**
                     * 获取Number of ports
                     * @return Port Number of ports
                     * 
                     */
                    int64_t GetPort() const;

                    /**
                     * 设置Number of ports
                     * @param _port Number of ports
                     * 
                     */
                    void SetPort(const int64_t& _port);

                    /**
                     * 判断参数 Port 是否已赋值
                     * @return Port 是否已赋值
                     * 
                     */
                    bool PortHasBeenSet() const;

                    /**
                     * 获取Number of vulnerabilities
                     * @return VUL Number of vulnerabilities
                     * 
                     */
                    int64_t GetVUL() const;

                    /**
                     * 设置Number of vulnerabilities
                     * @param _vUL Number of vulnerabilities
                     * 
                     */
                    void SetVUL(const int64_t& _vUL);

                    /**
                     * 判断参数 VUL 是否已赋值
                     * @return VUL 是否已赋值
                     * 
                     */
                    bool VULHasBeenSet() const;

                    /**
                     * 获取Weak Password Count
                     * @return WeakPassword Weak Password Count
                     * 
                     */
                    int64_t GetWeakPassword() const;

                    /**
                     * 设置Weak Password Count
                     * @param _weakPassword Weak Password Count
                     * 
                     */
                    void SetWeakPassword(const int64_t& _weakPassword);

                    /**
                     * 判断参数 WeakPassword 是否已赋值
                     * @return WeakPassword 是否已赋值
                     * 
                     */
                    bool WeakPasswordHasBeenSet() const;

                    /**
                     * 获取Number of Websites
                     * @return Website Number of Websites
                     * 
                     */
                    int64_t GetWebsite() const;

                    /**
                     * 设置Number of Websites
                     * @param _website Number of Websites
                     * 
                     */
                    void SetWebsite(const int64_t& _website);

                    /**
                     * 判断参数 Website 是否已赋值
                     * @return Website 是否已赋值
                     * 
                     */
                    bool WebsiteHasBeenSet() const;

                    /**
                     * 获取Number of Configurations
                     * @return CFG Number of Configurations
                     * 
                     */
                    int64_t GetCFG() const;

                    /**
                     * 设置Number of Configurations
                     * @param _cFG Number of Configurations
                     * 
                     */
                    void SetCFG(const int64_t& _cFG);

                    /**
                     * 判断参数 CFG 是否已赋值
                     * @return CFG 是否已赋值
                     * 
                     */
                    bool CFGHasBeenSet() const;

                    /**
                     * 获取Mapping Risk Count
                     * @return Server Mapping Risk Count
                     * 
                     */
                    int64_t GetServer() const;

                    /**
                     * 设置Mapping Risk Count
                     * @param _server Mapping Risk Count
                     * 
                     */
                    void SetServer(const int64_t& _server);

                    /**
                     * 判断参数 Server 是否已赋值
                     * @return Server 是否已赋值
                     * 
                     */
                    bool ServerHasBeenSet() const;

                    /**
                     * 获取Number of host risk configurations
                     * @return HostCFG Number of host risk configurations
                     * 
                     */
                    int64_t GetHostCFG() const;

                    /**
                     * 设置Number of host risk configurations
                     * @param _hostCFG Number of host risk configurations
                     * 
                     */
                    void SetHostCFG(const int64_t& _hostCFG);

                    /**
                     * 判断参数 HostCFG 是否已赋值
                     * @return HostCFG 是否已赋值
                     * 
                     */
                    bool HostCFGHasBeenSet() const;

                    /**
                     * 获取Number of risk configurations in the container baseline
                     * @return PodCFG Number of risk configurations in the container baseline
                     * 
                     */
                    int64_t GetPodCFG() const;

                    /**
                     * 设置Number of risk configurations in the container baseline
                     * @param _podCFG Number of risk configurations in the container baseline
                     * 
                     */
                    void SetPodCFG(const int64_t& _podCFG);

                    /**
                     * 判断参数 PodCFG 是否已赋值
                     * @return PodCFG 是否已赋值
                     * 
                     */
                    bool PodCFGHasBeenSet() const;

                private:

                    /**
                     * Date
                     */
                    std::string m_date;
                    bool m_dateHasBeenSet;

                    /**
                     * Number of ports
                     */
                    int64_t m_port;
                    bool m_portHasBeenSet;

                    /**
                     * Number of vulnerabilities
                     */
                    int64_t m_vUL;
                    bool m_vULHasBeenSet;

                    /**
                     * Weak Password Count
                     */
                    int64_t m_weakPassword;
                    bool m_weakPasswordHasBeenSet;

                    /**
                     * Number of Websites
                     */
                    int64_t m_website;
                    bool m_websiteHasBeenSet;

                    /**
                     * Number of Configurations
                     */
                    int64_t m_cFG;
                    bool m_cFGHasBeenSet;

                    /**
                     * Mapping Risk Count
                     */
                    int64_t m_server;
                    bool m_serverHasBeenSet;

                    /**
                     * Number of host risk configurations
                     */
                    int64_t m_hostCFG;
                    bool m_hostCFGHasBeenSet;

                    /**
                     * Number of risk configurations in the container baseline
                     */
                    int64_t m_podCFG;
                    bool m_podCFGHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_RISKCENTEROVERVIEWTRENDANALYSIS_H_
