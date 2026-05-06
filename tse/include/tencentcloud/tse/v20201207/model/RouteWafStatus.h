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

#ifndef TENCENTCLOUD_TSE_V20201207_MODEL_ROUTEWAFSTATUS_H_
#define TENCENTCLOUD_TSE_V20201207_MODEL_ROUTEWAFSTATUS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tse
    {
        namespace V20201207
        {
            namespace Model
            {
                /**
                * Route WAF status
                */
                class RouteWafStatus : public AbstractModel
                {
                public:
                    RouteWafStatus();
                    ~RouteWafStatus() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Route name
                     * @return Name Route name
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Route name
                     * @param _name Route name
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
                     * 获取ID of the route
                     * @return Id ID of the route
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置ID of the route
                     * @param _id ID of the route
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取Whether WAF protection is enabled for the route
                     * @return Status Whether WAF protection is enabled for the route
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Whether WAF protection is enabled for the route
                     * @param _status Whether WAF protection is enabled for the route
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Method.
                     * @return Methods Method.
                     * 
                     */
                    std::vector<std::string> GetMethods() const;

                    /**
                     * 设置Method.
                     * @param _methods Method.
                     * 
                     */
                    void SetMethods(const std::vector<std::string>& _methods);

                    /**
                     * 判断参数 Methods 是否已赋值
                     * @return Methods 是否已赋值
                     * 
                     */
                    bool MethodsHasBeenSet() const;

                    /**
                     * 获取Path.
                     * @return Paths Path.
                     * 
                     */
                    std::vector<std::string> GetPaths() const;

                    /**
                     * 设置Path.
                     * @param _paths Path.
                     * 
                     */
                    void SetPaths(const std::vector<std::string>& _paths);

                    /**
                     * 判断参数 Paths 是否已赋值
                     * @return Paths 是否已赋值
                     * 
                     */
                    bool PathsHasBeenSet() const;

                    /**
                     * 获取Domain
                     * @return Hosts Domain
                     * 
                     */
                    std::vector<std::string> GetHosts() const;

                    /**
                     * 设置Domain
                     * @param _hosts Domain
                     * 
                     */
                    void SetHosts(const std::vector<std::string>& _hosts);

                    /**
                     * 判断参数 Hosts 是否已赋值
                     * @return Hosts 是否已赋值
                     * 
                     */
                    bool HostsHasBeenSet() const;

                    /**
                     * 获取Name of the service corresponding to the route
                     * @return ServiceName Name of the service corresponding to the route
                     * 
                     */
                    std::string GetServiceName() const;

                    /**
                     * 设置Name of the service corresponding to the route
                     * @param _serviceName Name of the service corresponding to the route
                     * 
                     */
                    void SetServiceName(const std::string& _serviceName);

                    /**
                     * 判断参数 ServiceName 是否已赋值
                     * @return ServiceName 是否已赋值
                     * 
                     */
                    bool ServiceNameHasBeenSet() const;

                    /**
                     * 获取ID of the service corresponding to the route
                     * @return ServiceId ID of the service corresponding to the route
                     * 
                     */
                    std::string GetServiceId() const;

                    /**
                     * 设置ID of the service corresponding to the route
                     * @param _serviceId ID of the service corresponding to the route
                     * 
                     */
                    void SetServiceId(const std::string& _serviceId);

                    /**
                     * 判断参数 ServiceId 是否已赋值
                     * @return ServiceId 是否已赋值
                     * 
                     */
                    bool ServiceIdHasBeenSet() const;

                private:

                    /**
                     * Route name
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * ID of the route
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * Whether WAF protection is enabled for the route
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Method.
                     */
                    std::vector<std::string> m_methods;
                    bool m_methodsHasBeenSet;

                    /**
                     * Path.
                     */
                    std::vector<std::string> m_paths;
                    bool m_pathsHasBeenSet;

                    /**
                     * Domain
                     */
                    std::vector<std::string> m_hosts;
                    bool m_hostsHasBeenSet;

                    /**
                     * Name of the service corresponding to the route
                     */
                    std::string m_serviceName;
                    bool m_serviceNameHasBeenSet;

                    /**
                     * ID of the service corresponding to the route
                     */
                    std::string m_serviceId;
                    bool m_serviceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSE_V20201207_MODEL_ROUTEWAFSTATUS_H_
