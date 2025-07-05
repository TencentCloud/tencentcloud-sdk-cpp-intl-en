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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEASSETTYPETOPRESPONSE_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEASSETTYPETOPRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cwp/v20180228/model/AssetKeyVal.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * DescribeAssetTypeTop response structure.
                */
                class DescribeAssetTypeTopResponse : public AbstractModel
                {
                public:
                    DescribeAssetTypeTopResponse();
                    ~DescribeAssetTypeTopResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Top 5 accounts
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return User Top 5 accounts
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<AssetKeyVal> GetUser() const;

                    /**
                     * 判断参数 User 是否已赋值
                     * @return User 是否已赋值
                     * 
                     */
                    bool UserHasBeenSet() const;

                    /**
                     * 获取Top 5 ports
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Port Top 5 ports
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<AssetKeyVal> GetPort() const;

                    /**
                     * 判断参数 Port 是否已赋值
                     * @return Port 是否已赋值
                     * 
                     */
                    bool PortHasBeenSet() const;

                    /**
                     * 获取Top 5 processes
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Process Top 5 processes
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<AssetKeyVal> GetProcess() const;

                    /**
                     * 判断参数 Process 是否已赋值
                     * @return Process 是否已赋值
                     * 
                     */
                    bool ProcessHasBeenSet() const;

                    /**
                     * 获取Top 5 software
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Software Top 5 software
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<AssetKeyVal> GetSoftware() const;

                    /**
                     * 判断参数 Software 是否已赋值
                     * @return Software 是否已赋值
                     * 
                     */
                    bool SoftwareHasBeenSet() const;

                    /**
                     * 获取Top 5 databases
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Database Top 5 databases
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<AssetKeyVal> GetDatabase() const;

                    /**
                     * 判断参数 Database 是否已赋值
                     * @return Database 是否已赋值
                     * 
                     */
                    bool DatabaseHasBeenSet() const;

                    /**
                     * 获取Top 5 web applications
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return WebApp Top 5 web applications
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<AssetKeyVal> GetWebApp() const;

                    /**
                     * 判断参数 WebApp 是否已赋值
                     * @return WebApp 是否已赋值
                     * 
                     */
                    bool WebAppHasBeenSet() const;

                    /**
                     * 获取Top 5 web sites
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return WebLocation Top 5 web sites
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<AssetKeyVal> GetWebLocation() const;

                    /**
                     * 判断参数 WebLocation 是否已赋值
                     * @return WebLocation 是否已赋值
                     * 
                     */
                    bool WebLocationHasBeenSet() const;

                    /**
                     * 获取Top 5 web frameworks
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return WebFrame Top 5 web frameworks
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<AssetKeyVal> GetWebFrame() const;

                    /**
                     * 判断参数 WebFrame 是否已赋值
                     * @return WebFrame 是否已赋值
                     * 
                     */
                    bool WebFrameHasBeenSet() const;

                    /**
                     * 获取Top 5 web services
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return WebService Top 5 web services
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<AssetKeyVal> GetWebService() const;

                    /**
                     * 判断参数 WebService 是否已赋值
                     * @return WebService 是否已赋值
                     * 
                     */
                    bool WebServiceHasBeenSet() const;

                private:

                    /**
                     * Top 5 accounts
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<AssetKeyVal> m_user;
                    bool m_userHasBeenSet;

                    /**
                     * Top 5 ports
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<AssetKeyVal> m_port;
                    bool m_portHasBeenSet;

                    /**
                     * Top 5 processes
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<AssetKeyVal> m_process;
                    bool m_processHasBeenSet;

                    /**
                     * Top 5 software
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<AssetKeyVal> m_software;
                    bool m_softwareHasBeenSet;

                    /**
                     * Top 5 databases
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<AssetKeyVal> m_database;
                    bool m_databaseHasBeenSet;

                    /**
                     * Top 5 web applications
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<AssetKeyVal> m_webApp;
                    bool m_webAppHasBeenSet;

                    /**
                     * Top 5 web sites
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<AssetKeyVal> m_webLocation;
                    bool m_webLocationHasBeenSet;

                    /**
                     * Top 5 web frameworks
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<AssetKeyVal> m_webFrame;
                    bool m_webFrameHasBeenSet;

                    /**
                     * Top 5 web services
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<AssetKeyVal> m_webService;
                    bool m_webServiceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEASSETTYPETOPRESPONSE_H_
