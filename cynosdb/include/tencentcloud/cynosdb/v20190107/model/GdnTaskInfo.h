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
                * Global database task info
                */
                class GdnTaskInfo : public AbstractModel
                {
                public:
                    GdnTaskInfo();
                    ~GdnTaskInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Unique ID of the global database
                     * @return GdnId Unique ID of the global database
                     * 
                     */
                    std::string GetGdnId() const;

                    /**
                     * 设置Unique ID of the global database
                     * @param _gdnId Unique ID of the global database
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
                     * 获取unique alias of the global database
                     * @return GdnName unique alias of the global database
                     * 
                     */
                    std::string GetGdnName() const;

                    /**
                     * 设置unique alias of the global database
                     * @param _gdnName unique alias of the global database
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
                     * 获取Primary Cluster ID
                     * @return PrimaryClusterId Primary Cluster ID
                     * 
                     */
                    std::string GetPrimaryClusterId() const;

                    /**
                     * 设置Primary Cluster ID
                     * @param _primaryClusterId Primary Cluster ID
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
                     * 获取Master cluster region
                     * @return PrimaryClusterRegion Master cluster region
                     * 
                     */
                    std::string GetPrimaryClusterRegion() const;

                    /**
                     * 设置Master cluster region
                     * @param _primaryClusterRegion Master cluster region
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
                     * 获取from the cluster region
                     * @return StandbyClusterRegion from the cluster region
                     * 
                     */
                    std::string GetStandbyClusterRegion() const;

                    /**
                     * 设置from the cluster region
                     * @param _standbyClusterRegion from the cluster region
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
                     * 获取Whether forced switchover is performed
                     * @return ForceSwitchGdn Whether forced switchover is performed
                     * 
                     */
                    std::string GetForceSwitchGdn() const;

                    /**
                     * 设置Whether forced switchover is performed
                     * @param _forceSwitchGdn Whether forced switchover is performed
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
                     * 获取Return code
                     * @return Code Return code
                     * 
                     */
                    int64_t GetCode() const;

                    /**
                     * 设置Return code
                     * @param _code Return code
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
                     * 获取prompt message
                     * @return Message prompt message
                     * 
                     */
                    std::string GetMessage() const;

                    /**
                     * 设置prompt message
                     * @param _message prompt message
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
                     * Unique ID of the global database
                     */
                    std::string m_gdnId;
                    bool m_gdnIdHasBeenSet;

                    /**
                     * unique alias of the global database
                     */
                    std::string m_gdnName;
                    bool m_gdnNameHasBeenSet;

                    /**
                     * Primary Cluster ID
                     */
                    std::string m_primaryClusterId;
                    bool m_primaryClusterIdHasBeenSet;

                    /**
                     * Master cluster region
                     */
                    std::string m_primaryClusterRegion;
                    bool m_primaryClusterRegionHasBeenSet;

                    /**
                     * from the cluster region
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
                     * Whether forced switchover is performed
                     */
                    std::string m_forceSwitchGdn;
                    bool m_forceSwitchGdnHasBeenSet;

                    /**
                     * Return code
                     */
                    int64_t m_code;
                    bool m_codeHasBeenSet;

                    /**
                     * prompt message
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
