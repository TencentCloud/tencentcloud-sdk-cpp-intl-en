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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_SERVICEINFO_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_SERVICEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * Information list of TCSS
                */
                class ServiceInfo : public AbstractModel
                {
                public:
                    ServiceInfo();
                    ~ServiceInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Service ID
                     * @return ServiceID Service ID
                     * 
                     */
                    std::string GetServiceID() const;

                    /**
                     * 设置Service ID
                     * @param _serviceID Service ID
                     * 
                     */
                    void SetServiceID(const std::string& _serviceID);

                    /**
                     * 判断参数 ServiceID 是否已赋值
                     * @return ServiceID 是否已赋值
                     * 
                     */
                    bool ServiceIDHasBeenSet() const;

                    /**
                     * 获取Server ID
                     * @return HostID Server ID
                     * 
                     */
                    std::string GetHostID() const;

                    /**
                     * 设置Server ID
                     * @param _hostID Server ID
                     * 
                     */
                    void SetHostID(const std::string& _hostID);

                    /**
                     * 判断参数 HostID 是否已赋值
                     * @return HostID 是否已赋值
                     * 
                     */
                    bool HostIDHasBeenSet() const;

                    /**
                     * 获取Server IP
                     * @return HostIP Server IP
                     * 
                     */
                    std::string GetHostIP() const;

                    /**
                     * 设置Server IP
                     * @param _hostIP Server IP
                     * 
                     */
                    void SetHostIP(const std::string& _hostIP);

                    /**
                     * 判断参数 HostIP 是否已赋值
                     * @return HostIP 是否已赋值
                     * 
                     */
                    bool HostIPHasBeenSet() const;

                    /**
                     * 获取Container name
                     * @return ContainerName Container name
                     * 
                     */
                    std::string GetContainerName() const;

                    /**
                     * 设置Container name
                     * @param _containerName Container name
                     * 
                     */
                    void SetContainerName(const std::string& _containerName);

                    /**
                     * 判断参数 ContainerName 是否已赋值
                     * @return ContainerName 是否已赋值
                     * 
                     */
                    bool ContainerNameHasBeenSet() const;

                    /**
                     * 获取Service name, such as `nginx` and `redis`
                     * @return Type Service name, such as `nginx` and `redis`
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Service name, such as `nginx` and `redis`
                     * @param _type Service name, such as `nginx` and `redis`
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取Version
                     * @return Version Version
                     * 
                     */
                    std::string GetVersion() const;

                    /**
                     * 设置Version
                     * @param _version Version
                     * 
                     */
                    void SetVersion(const std::string& _version);

                    /**
                     * 判断参数 Version 是否已赋值
                     * @return Version 是否已赋值
                     * 
                     */
                    bool VersionHasBeenSet() const;

                    /**
                     * 获取Account
                     * @return RunAs Account
                     * 
                     */
                    std::string GetRunAs() const;

                    /**
                     * 设置Account
                     * @param _runAs Account
                     * 
                     */
                    void SetRunAs(const std::string& _runAs);

                    /**
                     * 判断参数 RunAs 是否已赋值
                     * @return RunAs 是否已赋值
                     * 
                     */
                    bool RunAsHasBeenSet() const;

                    /**
                     * 获取Listened port
                     * @return Listen Listened port
                     * 
                     */
                    std::vector<std::string> GetListen() const;

                    /**
                     * 设置Listened port
                     * @param _listen Listened port
                     * 
                     */
                    void SetListen(const std::vector<std::string>& _listen);

                    /**
                     * 判断参数 Listen 是否已赋值
                     * @return Listen 是否已赋值
                     * 
                     */
                    bool ListenHasBeenSet() const;

                    /**
                     * 获取Configuration
                     * @return Config Configuration
                     * 
                     */
                    std::string GetConfig() const;

                    /**
                     * 设置Configuration
                     * @param _config Configuration
                     * 
                     */
                    void SetConfig(const std::string& _config);

                    /**
                     * 判断参数 Config 是否已赋值
                     * @return Config 是否已赋值
                     * 
                     */
                    bool ConfigHasBeenSet() const;

                    /**
                     * 获取Number of associated processes
                     * @return ProcessCnt Number of associated processes
                     * 
                     */
                    uint64_t GetProcessCnt() const;

                    /**
                     * 设置Number of associated processes
                     * @param _processCnt Number of associated processes
                     * 
                     */
                    void SetProcessCnt(const uint64_t& _processCnt);

                    /**
                     * 判断参数 ProcessCnt 是否已赋值
                     * @return ProcessCnt 是否已赋值
                     * 
                     */
                    bool ProcessCntHasBeenSet() const;

                    /**
                     * 获取Access log
                     * @return AccessLog Access log
                     * 
                     */
                    std::string GetAccessLog() const;

                    /**
                     * 设置Access log
                     * @param _accessLog Access log
                     * 
                     */
                    void SetAccessLog(const std::string& _accessLog);

                    /**
                     * 判断参数 AccessLog 是否已赋值
                     * @return AccessLog 是否已赋值
                     * 
                     */
                    bool AccessLogHasBeenSet() const;

                    /**
                     * 获取Error log
                     * @return ErrorLog Error log
                     * 
                     */
                    std::string GetErrorLog() const;

                    /**
                     * 设置Error log
                     * @param _errorLog Error log
                     * 
                     */
                    void SetErrorLog(const std::string& _errorLog);

                    /**
                     * 判断参数 ErrorLog 是否已赋值
                     * @return ErrorLog 是否已赋值
                     * 
                     */
                    bool ErrorLogHasBeenSet() const;

                    /**
                     * 获取Data directory
                     * @return DataPath Data directory
                     * 
                     */
                    std::string GetDataPath() const;

                    /**
                     * 设置Data directory
                     * @param _dataPath Data directory
                     * 
                     */
                    void SetDataPath(const std::string& _dataPath);

                    /**
                     * 判断参数 DataPath 是否已赋值
                     * @return DataPath 是否已赋值
                     * 
                     */
                    bool DataPathHasBeenSet() const;

                    /**
                     * 获取Web directory
                     * @return WebRoot Web directory
                     * 
                     */
                    std::string GetWebRoot() const;

                    /**
                     * 设置Web directory
                     * @param _webRoot Web directory
                     * 
                     */
                    void SetWebRoot(const std::string& _webRoot);

                    /**
                     * 判断参数 WebRoot 是否已赋值
                     * @return WebRoot 是否已赋值
                     * 
                     */
                    bool WebRootHasBeenSet() const;

                    /**
                     * 获取ID of the associated process
                     * @return Pids ID of the associated process
                     * 
                     */
                    std::vector<uint64_t> GetPids() const;

                    /**
                     * 设置ID of the associated process
                     * @param _pids ID of the associated process
                     * 
                     */
                    void SetPids(const std::vector<uint64_t>& _pids);

                    /**
                     * 判断参数 Pids 是否已赋值
                     * @return Pids 是否已赋值
                     * 
                     */
                    bool PidsHasBeenSet() const;

                    /**
                     * 获取Service type. Valid values: `app`, `web`, `db`.
                     * @return MainType Service type. Valid values: `app`, `web`, `db`.
                     * 
                     */
                    std::string GetMainType() const;

                    /**
                     * 设置Service type. Valid values: `app`, `web`, `db`.
                     * @param _mainType Service type. Valid values: `app`, `web`, `db`.
                     * 
                     */
                    void SetMainType(const std::string& _mainType);

                    /**
                     * 判断参数 MainType 是否已赋值
                     * @return MainType 是否已赋值
                     * 
                     */
                    bool MainTypeHasBeenSet() const;

                    /**
                     * 获取Execution file
                     * @return Exe Execution file
                     * 
                     */
                    std::string GetExe() const;

                    /**
                     * 设置Execution file
                     * @param _exe Execution file
                     * 
                     */
                    void SetExe(const std::string& _exe);

                    /**
                     * 判断参数 Exe 是否已赋值
                     * @return Exe 是否已赋值
                     * 
                     */
                    bool ExeHasBeenSet() const;

                    /**
                     * 获取Service command line parameter
                     * @return Parameter Service command line parameter
                     * 
                     */
                    std::string GetParameter() const;

                    /**
                     * 设置Service command line parameter
                     * @param _parameter Service command line parameter
                     * 
                     */
                    void SetParameter(const std::string& _parameter);

                    /**
                     * 判断参数 Parameter 是否已赋值
                     * @return Parameter 是否已赋值
                     * 
                     */
                    bool ParameterHasBeenSet() const;

                    /**
                     * 获取Container ID
                     * @return ContainerId Container ID
                     * 
                     */
                    std::string GetContainerId() const;

                    /**
                     * 设置Container ID
                     * @param _containerId Container ID
                     * 
                     */
                    void SetContainerId(const std::string& _containerId);

                    /**
                     * 判断参数 ContainerId 是否已赋值
                     * @return ContainerId 是否已赋值
                     * 
                     */
                    bool ContainerIdHasBeenSet() const;

                    /**
                     * 获取Server name
                     * @return HostName Server name
                     * 
                     */
                    std::string GetHostName() const;

                    /**
                     * 设置Server name
                     * @param _hostName Server name
                     * 
                     */
                    void SetHostName(const std::string& _hostName);

                    /**
                     * 判断参数 HostName 是否已赋值
                     * @return HostName 是否已赋值
                     * 
                     */
                    bool HostNameHasBeenSet() const;

                    /**
                     * 获取Public IP
                     * @return PublicIp Public IP
                     * 
                     */
                    std::string GetPublicIp() const;

                    /**
                     * 设置Public IP
                     * @param _publicIp Public IP
                     * 
                     */
                    void SetPublicIp(const std::string& _publicIp);

                    /**
                     * 判断参数 PublicIp 是否已赋值
                     * @return PublicIp 是否已赋值
                     * 
                     */
                    bool PublicIpHasBeenSet() const;

                private:

                    /**
                     * Service ID
                     */
                    std::string m_serviceID;
                    bool m_serviceIDHasBeenSet;

                    /**
                     * Server ID
                     */
                    std::string m_hostID;
                    bool m_hostIDHasBeenSet;

                    /**
                     * Server IP
                     */
                    std::string m_hostIP;
                    bool m_hostIPHasBeenSet;

                    /**
                     * Container name
                     */
                    std::string m_containerName;
                    bool m_containerNameHasBeenSet;

                    /**
                     * Service name, such as `nginx` and `redis`
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Version
                     */
                    std::string m_version;
                    bool m_versionHasBeenSet;

                    /**
                     * Account
                     */
                    std::string m_runAs;
                    bool m_runAsHasBeenSet;

                    /**
                     * Listened port
                     */
                    std::vector<std::string> m_listen;
                    bool m_listenHasBeenSet;

                    /**
                     * Configuration
                     */
                    std::string m_config;
                    bool m_configHasBeenSet;

                    /**
                     * Number of associated processes
                     */
                    uint64_t m_processCnt;
                    bool m_processCntHasBeenSet;

                    /**
                     * Access log
                     */
                    std::string m_accessLog;
                    bool m_accessLogHasBeenSet;

                    /**
                     * Error log
                     */
                    std::string m_errorLog;
                    bool m_errorLogHasBeenSet;

                    /**
                     * Data directory
                     */
                    std::string m_dataPath;
                    bool m_dataPathHasBeenSet;

                    /**
                     * Web directory
                     */
                    std::string m_webRoot;
                    bool m_webRootHasBeenSet;

                    /**
                     * ID of the associated process
                     */
                    std::vector<uint64_t> m_pids;
                    bool m_pidsHasBeenSet;

                    /**
                     * Service type. Valid values: `app`, `web`, `db`.
                     */
                    std::string m_mainType;
                    bool m_mainTypeHasBeenSet;

                    /**
                     * Execution file
                     */
                    std::string m_exe;
                    bool m_exeHasBeenSet;

                    /**
                     * Service command line parameter
                     */
                    std::string m_parameter;
                    bool m_parameterHasBeenSet;

                    /**
                     * Container ID
                     */
                    std::string m_containerId;
                    bool m_containerIdHasBeenSet;

                    /**
                     * Server name
                     */
                    std::string m_hostName;
                    bool m_hostNameHasBeenSet;

                    /**
                     * Public IP
                     */
                    std::string m_publicIp;
                    bool m_publicIpHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_SERVICEINFO_H_
