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
                * Configuration Risk from Asset's Perspective
                */
                class AssetViewCFGRisk : public AbstractModel
                {
                public:
                    AssetViewCFGRisk();
                    ~AssetViewCFGRisk() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Unique ID
                     * @return Id Unique ID
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置Unique ID
                     * @param _id Unique ID
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
                     * 获取Instance ID.
                     * @return InstanceId Instance ID.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID.
                     * @param _instanceId Instance ID.
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
                     * 获取Instance name.
                     * @return InstanceName Instance name.
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置Instance name.
                     * @param _instanceName Instance name.
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
                     * 获取Affect assets
                     * @return AffectAsset Affect assets
                     * 
                     */
                    std::string GetAffectAsset() const;

                    /**
                     * 设置Affect assets
                     * @param _affectAsset Affect assets
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
                     * 获取Risk level. low: low risk. high: high risk. middle: medium risk. info: notification. extreme: critical.
                     * @return Level Risk level. low: low risk. high: high risk. middle: medium risk. info: notification. extreme: critical.
                     * 
                     */
                    std::string GetLevel() const;

                    /**
                     * 设置Risk level. low: low risk. high: high risk. middle: medium risk. info: notification. extreme: critical.
                     * @param _level Risk level. low: low risk. high: high risk. middle: medium risk. info: notification. extreme: critical.
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
                     * 获取First Recognition Time
                     * @return FirstTime First Recognition Time
                     * 
                     */
                    std::string GetFirstTime() const;

                    /**
                     * 设置First Recognition Time
                     * @param _firstTime First Recognition Time
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
                     * 获取Latest Recognition Time
                     * @return RecentTime Latest Recognition Time
                     * 
                     */
                    std::string GetRecentTime() const;

                    /**
                     * 设置Latest Recognition Time
                     * @param _recentTime Latest Recognition Time
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
                     * 获取Source.
                     * @return From Source.
                     * 
                     */
                    std::string GetFrom() const;

                    /**
                     * 设置Source.
                     * @param _from Source.
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
                     * 获取Status.
                     * @return Status Status.
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置Status.
                     * @param _status Status.
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
                     * 获取Relevant standards
                     * @return CFGSTD Relevant standards
                     * 
                     */
                    std::string GetCFGSTD() const;

                    /**
                     * 设置Relevant standards
                     * @param _cFGSTD Relevant standards
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
                     * 获取Configuration detail
                     * @return CFGDescribe Configuration detail
                     * 
                     */
                    std::string GetCFGDescribe() const;

                    /**
                     * 设置Configuration detail
                     * @param _cFGDescribe Configuration detail
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
                     * 获取Fixing suggestion
                     * @return CFGFix Fixing suggestion
                     * 
                     */
                    std::string GetCFGFix() const;

                    /**
                     * 设置Fixing suggestion
                     * @param _cFGFix Fixing suggestion
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
                     * 获取Help Document Link
                     * @return CFGHelpURL Help Document Link
                     * 
                     */
                    std::string GetCFGHelpURL() const;

                    /**
                     * 设置Help Document Link
                     * @param _cFGHelpURL Help Document Link
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
                     * 获取Front-end Usage Index
                     * @return Index Front-end Usage Index
                     * 
                     */
                    std::string GetIndex() const;

                    /**
                     * 设置Front-end Usage Index
                     * @param _index Front-end Usage Index
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
                     * 获取User appid.
                     * @return AppId User appid.
                     * 
                     */
                    std::string GetAppId() const;

                    /**
                     * 设置User appid.
                     * @param _appId User appid.
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
                     * 获取User Nickname
                     * @return Nick User Nickname
                     * 
                     */
                    std::string GetNick() const;

                    /**
                     * 设置User Nickname
                     * @param _nick User Nickname
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
                     * @return Uin User UIN
                     * 
                     */
                    std::string GetUin() const;

                    /**
                     * 设置User UIN
                     * @param _uin User UIN
                     * 
                     */
                    void SetUin(const std::string& _uin);

                    /**
                     * 判断参数 Uin 是否已赋值
                     * @return Uin 是否已赋值
                     * 
                     */
                    bool UinHasBeenSet() const;

                    /**
                     * 获取This field is displayed when the asset type is LBL, to help locate the specific LB.
                     * @return ClbId This field is displayed when the asset type is LBL, to help locate the specific LB.
                     * 
                     */
                    std::string GetClbId() const;

                    /**
                     * 设置This field is displayed when the asset type is LBL, to help locate the specific LB.
                     * @param _clbId This field is displayed when the asset type is LBL, to help locate the specific LB.
                     * 
                     */
                    void SetClbId(const std::string& _clbId);

                    /**
                     * 判断参数 ClbId 是否已赋值
                     * @return ClbId 是否已赋值
                     * 
                     */
                    bool ClbIdHasBeenSet() const;

                private:

                    /**
                     * Unique ID
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
                     * Instance ID.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Instance name.
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * Instance type
                     */
                    std::string m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * Affect assets
                     */
                    std::string m_affectAsset;
                    bool m_affectAssetHasBeenSet;

                    /**
                     * Risk level. low: low risk. high: high risk. middle: medium risk. info: notification. extreme: critical.
                     */
                    std::string m_level;
                    bool m_levelHasBeenSet;

                    /**
                     * First Recognition Time
                     */
                    std::string m_firstTime;
                    bool m_firstTimeHasBeenSet;

                    /**
                     * Latest Recognition Time
                     */
                    std::string m_recentTime;
                    bool m_recentTimeHasBeenSet;

                    /**
                     * Source.
                     */
                    std::string m_from;
                    bool m_fromHasBeenSet;

                    /**
                     * Status.
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Relevant standards
                     */
                    std::string m_cFGSTD;
                    bool m_cFGSTDHasBeenSet;

                    /**
                     * Configuration detail
                     */
                    std::string m_cFGDescribe;
                    bool m_cFGDescribeHasBeenSet;

                    /**
                     * Fixing suggestion
                     */
                    std::string m_cFGFix;
                    bool m_cFGFixHasBeenSet;

                    /**
                     * Help Document Link
                     */
                    std::string m_cFGHelpURL;
                    bool m_cFGHelpURLHasBeenSet;

                    /**
                     * Front-end Usage Index
                     */
                    std::string m_index;
                    bool m_indexHasBeenSet;

                    /**
                     * User appid.
                     */
                    std::string m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * User Nickname
                     */
                    std::string m_nick;
                    bool m_nickHasBeenSet;

                    /**
                     * User UIN
                     */
                    std::string m_uin;
                    bool m_uinHasBeenSet;

                    /**
                     * This field is displayed when the asset type is LBL, to help locate the specific LB.
                     */
                    std::string m_clbId;
                    bool m_clbIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_ASSETVIEWCFGRISK_H_
