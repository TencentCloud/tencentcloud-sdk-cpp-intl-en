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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_GDNTASKINFO_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_GDNTASKINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * Global database task information
                */
                class GdnTaskInfo : public AbstractModel
                {
                public:
                    GdnTaskInfo();
                    ~GdnTaskInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Global database unique ID
                     * @return GdnId Global database unique ID
                     * 
                     */
                    std::string GetGdnId() const;

                    /**
                     * 设置Global database unique ID
                     * @param _gdnId Global database unique ID
                     * 
                     */
                    void SetGdnId(const std::string& _gdnId);

                    /**
                     * 判断参数 GdnId 是否已赋值
                     * @return GdnId 是否已赋值
                     * 
                     */
                    bool GdnIdHasBeenSet() const;

                    /**
                     * 获取Unique alias of the global database
                     * @return GdnName Unique alias of the global database
                     * 
                     */
                    std::string GetGdnName() const;

                    /**
                     * 设置Unique alias of the global database
                     * @param _gdnName Unique alias of the global database
                     * 
                     */
                    void SetGdnName(const std::string& _gdnName);

                    /**
                     * 判断参数 GdnName 是否已赋值
                     * @return GdnName 是否已赋值
                     * 
                     */
                    bool GdnNameHasBeenSet() const;

                    /**
                     * 获取Primary cluster ID
                     * @return PrimaryClusterId Primary cluster ID
                     * 
                     */
                    std::string GetPrimaryClusterId() const;

                    /**
                     * 设置Primary cluster ID
                     * @param _primaryClusterId Primary cluster ID
                     * 
                     */
                    void SetPrimaryClusterId(const std::string& _primaryClusterId);

                    /**
                     * 判断参数 PrimaryClusterId 是否已赋值
                     * @return PrimaryClusterId 是否已赋值
                     * 
                     */
                    bool PrimaryClusterIdHasBeenSet() const;

                    /**
                     * 获取Region of the primary cluster
                     * @return PrimaryClusterRegion Region of the primary cluster
                     * 
                     */
                    std::string GetPrimaryClusterRegion() const;

                    /**
                     * 设置Region of the primary cluster
                     * @param _primaryClusterRegion Region of the primary cluster
                     * 
                     */
                    void SetPrimaryClusterRegion(const std::string& _primaryClusterRegion);

                    /**
                     * 判断参数 PrimaryClusterRegion 是否已赋值
                     * @return PrimaryClusterRegion 是否已赋值
                     * 
                     */
                    bool PrimaryClusterRegionHasBeenSet() const;

                    /**
                     * 获取From the cluster region
                     * @return StandbyClusterRegion From the cluster region
                     * 
                     */
                    std::string GetStandbyClusterRegion() const;

                    /**
                     * 设置From the cluster region
                     * @param _standbyClusterRegion From the cluster region
                     * 
                     */
                    void SetStandbyClusterRegion(const std::string& _standbyClusterRegion);

                    /**
                     * 判断参数 StandbyClusterRegion 是否已赋值
                     * @return StandbyClusterRegion 是否已赋值
                     * 
                     */
                    bool StandbyClusterRegionHasBeenSet() const;

                    /**
                     * 获取Slave cluster ID
                     * @return StandbyClusterId Slave cluster ID
                     * 
                     */
                    std::string GetStandbyClusterId() const;

                    /**
                     * 设置Slave cluster ID
                     * @param _standbyClusterId Slave cluster ID
                     * 
                     */
                    void SetStandbyClusterId(const std::string& _standbyClusterId);

                    /**
                     * 判断参数 StandbyClusterId 是否已赋值
                     * @return StandbyClusterId 是否已赋值
                     * 
                     */
                    bool StandbyClusterIdHasBeenSet() const;

                    /**
                     * 获取From the cluster name
                     * @return StandbyClusterName From the cluster name
                     * 
                     */
                    std::string GetStandbyClusterName() const;

                    /**
                     * 设置From the cluster name
                     * @param _standbyClusterName From the cluster name
                     * 
                     */
                    void SetStandbyClusterName(const std::string& _standbyClusterName);

                    /**
                     * 判断参数 StandbyClusterName 是否已赋值
                     * @return StandbyClusterName 是否已赋值
                     * 
                     */
                    bool StandbyClusterNameHasBeenSet() const;

                    /**
                     * 获取Whether a forced switchover has been performed
                     * @return ForceSwitchGdn Whether a forced switchover has been performed
                     * 
                     */
                    std::string GetForceSwitchGdn() const;

                    /**
                     * 设置Whether a forced switchover has been performed
                     * @param _forceSwitchGdn Whether a forced switchover has been performed
                     * 
                     */
                    void SetForceSwitchGdn(const std::string& _forceSwitchGdn);

                    /**
                     * 判断参数 ForceSwitchGdn 是否已赋值
                     * @return ForceSwitchGdn 是否已赋值
                     * 
                     */
                    bool ForceSwitchGdnHasBeenSet() const;

                    /**
                     * 获取code
                     * @return Code code
                     * 
                     */
                    int64_t GetCode() const;

                    /**
                     * 设置code
                     * @param _code code
                     * 
                     */
                    void SetCode(const int64_t& _code);

                    /**
                     * 判断参数 Code 是否已赋值
                     * @return Code 是否已赋值
                     * 
                     */
                    bool CodeHasBeenSet() const;

                    /**
                     * 获取Prompt message
                     * @return Message Prompt message
                     * 
                     */
                    std::string GetMessage() const;

                    /**
                     * 设置Prompt message
                     * @param _message Prompt message
                     * 
                     */
                    void SetMessage(const std::string& _message);

                    /**
                     * 判断参数 Message 是否已赋值
                     * @return Message 是否已赋值
                     * 
                     */
                    bool MessageHasBeenSet() const;

                    /**
                     * 获取Whether forced switchover is supported
                     * @return IsSupportForce Whether forced switchover is supported
                     * 
                     */
                    std::string GetIsSupportForce() const;

                    /**
                     * 设置Whether forced switchover is supported
                     * @param _isSupportForce Whether forced switchover is supported
                     * 
                     */
                    void SetIsSupportForce(const std::string& _isSupportForce);

                    /**
                     * 判断参数 IsSupportForce 是否已赋值
                     * @return IsSupportForce 是否已赋值
                     * 
                     */
                    bool IsSupportForceHasBeenSet() const;

                private:

                    /**
                     * Global database unique ID
                     */
                    std::string m_gdnId;
                    bool m_gdnIdHasBeenSet;

                    /**
                     * Unique alias of the global database
                     */
                    std::string m_gdnName;
                    bool m_gdnNameHasBeenSet;

                    /**
                     * Primary cluster ID
                     */
                    std::string m_primaryClusterId;
                    bool m_primaryClusterIdHasBeenSet;

                    /**
                     * Region of the primary cluster
                     */
                    std::string m_primaryClusterRegion;
                    bool m_primaryClusterRegionHasBeenSet;

                    /**
                     * From the cluster region
                     */
                    std::string m_standbyClusterRegion;
                    bool m_standbyClusterRegionHasBeenSet;

                    /**
                     * Slave cluster ID
                     */
                    std::string m_standbyClusterId;
                    bool m_standbyClusterIdHasBeenSet;

                    /**
                     * From the cluster name
                     */
                    std::string m_standbyClusterName;
                    bool m_standbyClusterNameHasBeenSet;

                    /**
                     * Whether a forced switchover has been performed
                     */
                    std::string m_forceSwitchGdn;
                    bool m_forceSwitchGdnHasBeenSet;

                    /**
                     * code
                     */
                    int64_t m_code;
                    bool m_codeHasBeenSet;

                    /**
                     * Prompt message
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                    /**
                     * Whether forced switchover is supported
                     */
                    std::string m_isSupportForce;
                    bool m_isSupportForceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_GDNTASKINFO_H_
