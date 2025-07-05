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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_ASSETVIEWCFGRISK_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_ASSETVIEWCFGRISK_H_

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
                * Details of a configuration risk
                */
                class AssetViewCFGRisk : public AbstractModel
                {
                public:
                    AssetViewCFGRisk();
                    ~AssetViewCFGRisk() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The unique ID.
                     * @return Id The unique ID.
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置The unique ID.
                     * @param _id The unique ID.
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
                     * 获取Configuration name
                     * @return CFGName Configuration name
                     * 
                     */
                    std::string GetCFGName() const;

                    /**
                     * 设置Configuration name
                     * @param _cFGName Configuration name
                     * 
                     */
                    void SetCFGName(const std::string& _cFGName);

                    /**
                     * 判断参数 CFGName 是否已赋值
                     * @return CFGName 是否已赋值
                     * 
                     */
                    bool CFGNameHasBeenSet() const;

                    /**
                     * 获取Check type
                     * @return CheckType Check type
                     * 
                     */
                    std::string GetCheckType() const;

                    /**
                     * 设置Check type
                     * @param _checkType Check type
                     * 
                     */
                    void SetCheckType(const std::string& _checkType);

                    /**
                     * 判断参数 CheckType 是否已赋值
                     * @return CheckType 是否已赋值
                     * 
                     */
                    bool CheckTypeHasBeenSet() const;

                    /**
                     * 获取Instance ID
                     * @return InstanceId Instance ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID
                     * @param _instanceId Instance ID
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取Instance name
                     * @return InstanceName Instance name
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置Instance name
                     * @param _instanceName Instance name
                     * 
                     */
                    void SetInstanceName(const std::string& _instanceName);

                    /**
                     * 判断参数 InstanceName 是否已赋值
                     * @return InstanceName 是否已赋值
                     * 
                     */
                    bool InstanceNameHasBeenSet() const;

                    /**
                     * 获取Instance type
                     * @return InstanceType Instance type
                     * 
                     */
                    std::string GetInstanceType() const;

                    /**
                     * 设置Instance type
                     * @param _instanceType Instance type
                     * 
                     */
                    void SetInstanceType(const std::string& _instanceType);

                    /**
                     * 判断参数 InstanceType 是否已赋值
                     * @return InstanceType 是否已赋值
                     * 
                     */
                    bool InstanceTypeHasBeenSet() const;

                    /**
                     * 获取Affected assets
                     * @return AffectAsset Affected assets
                     * 
                     */
                    std::string GetAffectAsset() const;

                    /**
                     * 设置Affected assets
                     * @param _affectAsset Affected assets
                     * 
                     */
                    void SetAffectAsset(const std::string& _affectAsset);

                    /**
                     * 判断参数 AffectAsset 是否已赋值
                     * @return AffectAsset 是否已赋值
                     * 
                     */
                    bool AffectAssetHasBeenSet() const;

                    /**
                     * 获取Risk level
                     * @return Level Risk level
                     * 
                     */
                    std::string GetLevel() const;

                    /**
                     * 设置Risk level
                     * @param _level Risk level
                     * 
                     */
                    void SetLevel(const std::string& _level);

                    /**
                     * 判断参数 Level 是否已赋值
                     * @return Level 是否已赋值
                     * 
                     */
                    bool LevelHasBeenSet() const;

                    /**
                     * 获取First detected
                     * @return FirstTime First detected
                     * 
                     */
                    std::string GetFirstTime() const;

                    /**
                     * 设置First detected
                     * @param _firstTime First detected
                     * 
                     */
                    void SetFirstTime(const std::string& _firstTime);

                    /**
                     * 判断参数 FirstTime 是否已赋值
                     * @return FirstTime 是否已赋值
                     * 
                     */
                    bool FirstTimeHasBeenSet() const;

                    /**
                     * 获取Last detected 
                     * @return RecentTime Last detected 
                     * 
                     */
                    std::string GetRecentTime() const;

                    /**
                     * 设置Last detected 
                     * @param _recentTime Last detected 
                     * 
                     */
                    void SetRecentTime(const std::string& _recentTime);

                    /**
                     * 判断参数 RecentTime 是否已赋值
                     * @return RecentTime 是否已赋值
                     * 
                     */
                    bool RecentTimeHasBeenSet() const;

                    /**
                     * 获取Source of the task
                     * @return From Source of the task
                     * 
                     */
                    std::string GetFrom() const;

                    /**
                     * 设置Source of the task
                     * @param _from Source of the task
                     * 
                     */
                    void SetFrom(const std::string& _from);

                    /**
                     * 判断参数 From 是否已赋值
                     * @return From 是否已赋值
                     * 
                     */
                    bool FromHasBeenSet() const;

                    /**
                     * 获取Status
                     * @return Status Status
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置Status
                     * @param _status Status
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取u200c-
                     * @return CFGSTD u200c-
                     * 
                     */
                    std::string GetCFGSTD() const;

                    /**
                     * 设置u200c-
                     * @param _cFGSTD u200c-
                     * 
                     */
                    void SetCFGSTD(const std::string& _cFGSTD);

                    /**
                     * 判断参数 CFGSTD 是否已赋值
                     * @return CFGSTD 是否已赋值
                     * 
                     */
                    bool CFGSTDHasBeenSet() const;

                    /**
                     * 获取Configuration details.
                     * @return CFGDescribe Configuration details.
                     * 
                     */
                    std::string GetCFGDescribe() const;

                    /**
                     * 设置Configuration details.
                     * @param _cFGDescribe Configuration details.
                     * 
                     */
                    void SetCFGDescribe(const std::string& _cFGDescribe);

                    /**
                     * 判断参数 CFGDescribe 是否已赋值
                     * @return CFGDescribe 是否已赋值
                     * 
                     */
                    bool CFGDescribeHasBeenSet() const;

                    /**
                     * 获取Fix suggestion
                     * @return CFGFix Fix suggestion
                     * 
                     */
                    std::string GetCFGFix() const;

                    /**
                     * 设置Fix suggestion
                     * @param _cFGFix Fix suggestion
                     * 
                     */
                    void SetCFGFix(const std::string& _cFGFix);

                    /**
                     * 判断参数 CFGFix 是否已赋值
                     * @return CFGFix 是否已赋值
                     * 
                     */
                    bool CFGFixHasBeenSet() const;

                    /**
                     * 获取URL of the help documentation
                     * @return CFGHelpURL URL of the help documentation
                     * 
                     */
                    std::string GetCFGHelpURL() const;

                    /**
                     * 设置URL of the help documentation
                     * @param _cFGHelpURL URL of the help documentation
                     * 
                     */
                    void SetCFGHelpURL(const std::string& _cFGHelpURL);

                    /**
                     * 判断参数 CFGHelpURL 是否已赋值
                     * @return CFGHelpURL 是否已赋值
                     * 
                     */
                    bool CFGHelpURLHasBeenSet() const;

                    /**
                     * 获取Data entry key
                     * @return Index Data entry key
                     * 
                     */
                    std::string GetIndex() const;

                    /**
                     * 设置Data entry key
                     * @param _index Data entry key
                     * 
                     */
                    void SetIndex(const std::string& _index);

                    /**
                     * 判断参数 Index 是否已赋值
                     * @return Index 是否已赋值
                     * 
                     */
                    bool IndexHasBeenSet() const;

                    /**
                     * 获取User AppId
                     * @return AppId User AppId
                     * 
                     */
                    std::string GetAppId() const;

                    /**
                     * 设置User AppId
                     * @param _appId User AppId
                     * 
                     */
                    void SetAppId(const std::string& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取User name.
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return Nick User name.
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetNick() const;

                    /**
                     * 设置User name.
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _nick User name.
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetNick(const std::string& _nick);

                    /**
                     * 判断参数 Nick 是否已赋值
                     * @return Nick 是否已赋值
                     * 
                     */
                    bool NickHasBeenSet() const;

                    /**
                     * 获取User UIN
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return Uin User UIN
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetUin() const;

                    /**
                     * 设置User UIN
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _uin User UIN
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetUin(const std::string& _uin);

                    /**
                     * 判断参数 Uin 是否已赋值
                     * @return Uin 是否已赋值
                     * 
                     */
                    bool UinHasBeenSet() const;

                private:

                    /**
                     * The unique ID.
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * Configuration name
                     */
                    std::string m_cFGName;
                    bool m_cFGNameHasBeenSet;

                    /**
                     * Check type
                     */
                    std::string m_checkType;
                    bool m_checkTypeHasBeenSet;

                    /**
                     * Instance ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Instance name
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * Instance type
                     */
                    std::string m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * Affected assets
                     */
                    std::string m_affectAsset;
                    bool m_affectAssetHasBeenSet;

                    /**
                     * Risk level
                     */
                    std::string m_level;
                    bool m_levelHasBeenSet;

                    /**
                     * First detected
                     */
                    std::string m_firstTime;
                    bool m_firstTimeHasBeenSet;

                    /**
                     * Last detected 
                     */
                    std::string m_recentTime;
                    bool m_recentTimeHasBeenSet;

                    /**
                     * Source of the task
                     */
                    std::string m_from;
                    bool m_fromHasBeenSet;

                    /**
                     * Status
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * u200c-
                     */
                    std::string m_cFGSTD;
                    bool m_cFGSTDHasBeenSet;

                    /**
                     * Configuration details.
                     */
                    std::string m_cFGDescribe;
                    bool m_cFGDescribeHasBeenSet;

                    /**
                     * Fix suggestion
                     */
                    std::string m_cFGFix;
                    bool m_cFGFixHasBeenSet;

                    /**
                     * URL of the help documentation
                     */
                    std::string m_cFGHelpURL;
                    bool m_cFGHelpURLHasBeenSet;

                    /**
                     * Data entry key
                     */
                    std::string m_index;
                    bool m_indexHasBeenSet;

                    /**
                     * User AppId
                     */
                    std::string m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * User name.
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    std::string m_nick;
                    bool m_nickHasBeenSet;

                    /**
                     * User UIN
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    std::string m_uin;
                    bool m_uinHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_ASSETVIEWCFGRISK_H_
