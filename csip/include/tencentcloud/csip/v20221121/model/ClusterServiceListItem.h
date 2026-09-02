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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_CLUSTERSERVICELISTITEM_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_CLUSTERSERVICELISTITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/AssetTag.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * Cluster service list items
                */
                class ClusterServiceListItem : public AbstractModel
                {
                public:
                    ClusterServiceListItem();
                    ~ClusterServiceListItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>appid</p>
                     * @return AppID <p>appid</p>
                     * 
                     */
                    uint64_t GetAppID() const;

                    /**
                     * 设置<p>appid</p>
                     * @param _appID <p>appid</p>
                     * 
                     */
                    void SetAppID(const uint64_t& _appID);

                    /**
                     * 判断参数 AppID 是否已赋值
                     * @return AppID 是否已赋值
                     * 
                     */
                    bool AppIDHasBeenSet() const;

                    /**
                     * 获取<p>Asset id</p>
                     * @return AssetId <p>Asset id</p>
                     * @deprecated
                     */
                    std::string GetAssetId() const;

                    /**
                     * 设置<p>Asset id</p>
                     * @param _assetId <p>Asset id</p>
                     * @deprecated
                     */
                    void SetAssetId(const std::string& _assetId);

                    /**
                     * 判断参数 AssetId 是否已赋值
                     * @return AssetId 是否已赋值
                     * @deprecated
                     */
                    bool AssetIdHasBeenSet() const;

                    /**
                     * 获取<p>Name.</p>
                     * @return Name <p>Name.</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>Name.</p>
                     * @param _name <p>Name.</p>
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
                     * 获取<p>selector tag.</p>
                     * @return SelectorLabel <p>selector tag.</p>
                     * 
                     */
                    std::vector<AssetTag> GetSelectorLabel() const;

                    /**
                     * 设置<p>selector tag.</p>
                     * @param _selectorLabel <p>selector tag.</p>
                     * 
                     */
                    void SetSelectorLabel(const std::vector<AssetTag>& _selectorLabel);

                    /**
                     * 判断参数 SelectorLabel 是否已赋值
                     * @return SelectorLabel 是否已赋值
                     * 
                     */
                    bool SelectorLabelHasBeenSet() const;

                    /**
                     * 获取<p>Namespace.</p>
                     * @return Namespace <p>Namespace.</p>
                     * 
                     */
                    std::string GetNamespace() const;

                    /**
                     * 设置<p>Namespace.</p>
                     * @param _namespace <p>Namespace.</p>
                     * 
                     */
                    void SetNamespace(const std::string& _namespace);

                    /**
                     * 判断参数 Namespace 是否已赋值
                     * @return Namespace 是否已赋值
                     * 
                     */
                    bool NamespaceHasBeenSet() const;

                    /**
                     * 获取<p>Creation time.</p>
                     * @return CreateTime <p>Creation time.</p>
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置<p>Creation time.</p>
                     * @param _createTime <p>Creation time.</p>
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取<p>Unique service ID</p>
                     * @return ServiceUniqueID <p>Unique service ID</p>
                     * 
                     */
                    std::string GetServiceUniqueID() const;

                    /**
                     * 设置<p>Unique service ID</p>
                     * @param _serviceUniqueID <p>Unique service ID</p>
                     * 
                     */
                    void SetServiceUniqueID(const std::string& _serviceUniqueID);

                    /**
                     * 判断参数 ServiceUniqueID 是否已赋值
                     * @return ServiceUniqueID 是否已赋值
                     * 
                     */
                    bool ServiceUniqueIDHasBeenSet() const;

                    /**
                     * 获取<p>service type</p>
                     * @return ServiceType <p>service type</p>
                     * 
                     */
                    std::string GetServiceType() const;

                    /**
                     * 设置<p>service type</p>
                     * @param _serviceType <p>service type</p>
                     * 
                     */
                    void SetServiceType(const std::string& _serviceType);

                    /**
                     * 判断参数 ServiceType 是否已赋值
                     * @return ServiceType 是否已赋值
                     * 
                     */
                    bool ServiceTypeHasBeenSet() const;

                    /**
                     * 获取<p>Cluster IP</p>
                     * @return ClusterIP <p>Cluster IP</p>
                     * 
                     */
                    std::string GetClusterIP() const;

                    /**
                     * 设置<p>Cluster IP</p>
                     * @param _clusterIP <p>Cluster IP</p>
                     * 
                     */
                    void SetClusterIP(const std::string& _clusterIP);

                    /**
                     * 判断参数 ClusterIP 是否已赋值
                     * @return ClusterIP 是否已赋值
                     * 
                     */
                    bool ClusterIPHasBeenSet() const;

                    /**
                     * 获取<p>Public network IP.</p>
                     * @return ExternalIP <p>Public network IP.</p>
                     * 
                     */
                    std::vector<std::string> GetExternalIP() const;

                    /**
                     * 设置<p>Public network IP.</p>
                     * @param _externalIP <p>Public network IP.</p>
                     * 
                     */
                    void SetExternalIP(const std::vector<std::string>& _externalIP);

                    /**
                     * 判断参数 ExternalIP 是否已赋值
                     * @return ExternalIP 是否已赋值
                     * 
                     */
                    bool ExternalIPHasBeenSet() const;

                    /**
                     * 获取<p>Port</p>
                     * @return Ports <p>Port</p>
                     * 
                     */
                    std::vector<std::string> GetPorts() const;

                    /**
                     * 设置<p>Port</p>
                     * @param _ports <p>Port</p>
                     * 
                     */
                    void SetPorts(const std::vector<std::string>& _ports);

                    /**
                     * 判断参数 Ports 是否已赋值
                     * @return Ports 是否已赋值
                     * 
                     */
                    bool PortsHasBeenSet() const;

                private:

                    /**
                     * <p>appid</p>
                     */
                    uint64_t m_appID;
                    bool m_appIDHasBeenSet;

                    /**
                     * <p>Asset id</p>
                     */
                    std::string m_assetId;
                    bool m_assetIdHasBeenSet;

                    /**
                     * <p>Name.</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>selector tag.</p>
                     */
                    std::vector<AssetTag> m_selectorLabel;
                    bool m_selectorLabelHasBeenSet;

                    /**
                     * <p>Namespace.</p>
                     */
                    std::string m_namespace;
                    bool m_namespaceHasBeenSet;

                    /**
                     * <p>Creation time.</p>
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>Unique service ID</p>
                     */
                    std::string m_serviceUniqueID;
                    bool m_serviceUniqueIDHasBeenSet;

                    /**
                     * <p>service type</p>
                     */
                    std::string m_serviceType;
                    bool m_serviceTypeHasBeenSet;

                    /**
                     * <p>Cluster IP</p>
                     */
                    std::string m_clusterIP;
                    bool m_clusterIPHasBeenSet;

                    /**
                     * <p>Public network IP.</p>
                     */
                    std::vector<std::string> m_externalIP;
                    bool m_externalIPHasBeenSet;

                    /**
                     * <p>Port</p>
                     */
                    std::vector<std::string> m_ports;
                    bool m_portsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_CLUSTERSERVICELISTITEM_H_
