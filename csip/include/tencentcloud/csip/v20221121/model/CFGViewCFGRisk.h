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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_CFGVIEWCFGRISK_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_CFGVIEWCFGRISK_H_

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
                * Configuration Risk Objects from Configuration's Perspective
                */
                class CFGViewCFGRisk : public AbstractModel
                {
                public:
                    CFGViewCFGRisk();
                    ~CFGViewCFGRisk() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Affect assets
                     * @return NoHandleCount Affect assets
                     * 
                     */
                    int64_t GetNoHandleCount() const;

                    /**
                     * 设置Affect assets
                     * @param _noHandleCount Affect assets
                     * 
                     */
                    void SetNoHandleCount(const int64_t& _noHandleCount);

                    /**
                     * 判断参数 NoHandleCount 是否已赋值
                     * @return NoHandleCount 是否已赋值
                     * 
                     */
                    bool NoHandleCountHasBeenSet() const;

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
                     * 获取Status. 0-Unprocessed; 1-Disposed; 2-Ignored.
                     * @return AffectAssetCount Status. 0-Unprocessed; 1-Disposed; 2-Ignored.
                     * 
                     */
                    uint64_t GetAffectAssetCount() const;

                    /**
                     * 设置Status. 0-Unprocessed; 1-Disposed; 2-Ignored.
                     * @param _affectAssetCount Status. 0-Unprocessed; 1-Disposed; 2-Ignored.
                     * 
                     */
                    void SetAffectAssetCount(const uint64_t& _affectAssetCount);

                    /**
                     * 判断参数 AffectAssetCount 是否已赋值
                     * @return AffectAssetCount 是否已赋值
                     * 
                     */
                    bool AffectAssetCountHasBeenSet() const;

                    /**
                     * 获取Unique ID of Asset
                     * @return Id Unique ID of Asset
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置Unique ID of Asset
                     * @param _id Unique ID of Asset
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
                     * 获取Asset Subtype
                     * @return From Asset Subtype
                     * 
                     */
                    std::string GetFrom() const;

                    /**
                     * 设置Asset Subtype
                     * @param _from Asset Subtype
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
                     * 获取Front-end Index
                     * @return Index Front-end Index
                     * 
                     */
                    std::string GetIndex() const;

                    /**
                     * 设置Front-end Index
                     * @param _index Front-end Index
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
                     * 获取-
                     * @return CFGSTD -
                     * 
                     */
                    std::string GetCFGSTD() const;

                    /**
                     * 设置-
                     * @param _cFGSTD -
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
                     * 获取Description
                     * @return CFGDescribe Description
                     * 
                     */
                    std::string GetCFGDescribe() const;

                    /**
                     * 设置Description
                     * @param _cFGDescribe Description
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
                     * 获取Help documentation
                     * @return CFGHelpURL Help documentation
                     * 
                     */
                    std::string GetCFGHelpURL() const;

                    /**
                     * 设置Help documentation
                     * @param _cFGHelpURL Help documentation
                     * 
                     */
                    void SetCFGHelpURL(const std::string& _cFGHelpURL);

                    /**
                     * 判断参数 CFGHelpURL 是否已赋值
                     * @return CFGHelpURL 是否已赋值
                     * 
                     */
                    bool CFGHelpURLHasBeenSet() const;

                private:

                    /**
                     * Affect assets
                     */
                    int64_t m_noHandleCount;
                    bool m_noHandleCountHasBeenSet;

                    /**
                     * Risk level. low: low risk. high: high risk. middle: medium risk. info: notification. extreme: critical.
                     */
                    std::string m_level;
                    bool m_levelHasBeenSet;

                    /**
                     * Latest Recognition Time
                     */
                    std::string m_recentTime;
                    bool m_recentTimeHasBeenSet;

                    /**
                     * First Recognition Time
                     */
                    std::string m_firstTime;
                    bool m_firstTimeHasBeenSet;

                    /**
                     * Status. 0-Unprocessed; 1-Disposed; 2-Ignored.
                     */
                    uint64_t m_affectAssetCount;
                    bool m_affectAssetCountHasBeenSet;

                    /**
                     * Unique ID of Asset
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * Asset Subtype
                     */
                    std::string m_from;
                    bool m_fromHasBeenSet;

                    /**
                     * Front-end Index
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
                     * -
                     */
                    std::string m_cFGSTD;
                    bool m_cFGSTDHasBeenSet;

                    /**
                     * Description
                     */
                    std::string m_cFGDescribe;
                    bool m_cFGDescribeHasBeenSet;

                    /**
                     * Fixing suggestion
                     */
                    std::string m_cFGFix;
                    bool m_cFGFixHasBeenSet;

                    /**
                     * Help documentation
                     */
                    std::string m_cFGHelpURL;
                    bool m_cFGHelpURLHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_CFGVIEWCFGRISK_H_
