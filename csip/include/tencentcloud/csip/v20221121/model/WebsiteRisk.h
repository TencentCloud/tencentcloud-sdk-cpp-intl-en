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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_WEBSITERISK_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_WEBSITERISK_H_

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
                * Website Risk Objects
                */
                class WebsiteRisk : public AbstractModel
                {
                public:
                    WebsiteRisk();
                    ~WebsiteRisk() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


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
                     * @return Status Status. 0-Unprocessed; 1-Disposed; 2-Ignored.
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置Status. 0-Unprocessed; 1-Disposed; 2-Ignored.
                     * @param _status Status. 0-Unprocessed; 1-Disposed; 2-Ignored.
                     * 
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取ID, handle risks
                     * @return Id ID, handle risks
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置ID, handle risks
                     * @param _id ID, handle risks
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
                     * 获取Risky link
                     * @return URL Risky link
                     * 
                     */
                    std::string GetURL() const;

                    /**
                     * 设置Risky link
                     * @param _uRL Risky link
                     * 
                     */
                    void SetURL(const std::string& _uRL);

                    /**
                     * 判断参数 URL 是否已赋值
                     * @return URL 是否已赋值
                     * 
                     */
                    bool URLHasBeenSet() const;

                    /**
                     * 获取Risk File Address
                     * @return URLPath Risk File Address
                     * 
                     */
                    std::string GetURLPath() const;

                    /**
                     * 设置Risk File Address
                     * @param _uRLPath Risk File Address
                     * 
                     */
                    void SetURLPath(const std::string& _uRLPath);

                    /**
                     * 判断参数 URLPath 是否已赋值
                     * @return URLPath 是否已赋值
                     * 
                     */
                    bool URLPathHasBeenSet() const;

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
                     * 获取Type.
                     * @return DetectEngine Type.
                     * 
                     */
                    std::string GetDetectEngine() const;

                    /**
                     * 设置Type.
                     * @param _detectEngine Type.
                     * 
                     */
                    void SetDetectEngine(const std::string& _detectEngine);

                    /**
                     * 判断参数 DetectEngine 是否已赋值
                     * @return DetectEngine 是否已赋值
                     * 
                     */
                    bool DetectEngineHasBeenSet() const;

                    /**
                     * 获取Result Description
                     * @return ResultDescribe Result Description
                     * 
                     */
                    std::string GetResultDescribe() const;

                    /**
                     * 设置Result Description
                     * @param _resultDescribe Result Description
                     * 
                     */
                    void SetResultDescribe(const std::string& _resultDescribe);

                    /**
                     * 判断参数 ResultDescribe 是否已赋值
                     * @return ResultDescribe 是否已赋值
                     * 
                     */
                    bool ResultDescribeHasBeenSet() const;

                    /**
                     * 获取Source Address URL
                     * @return SourceURL Source Address URL
                     * 
                     */
                    std::string GetSourceURL() const;

                    /**
                     * 设置Source Address URL
                     * @param _sourceURL Source Address URL
                     * 
                     */
                    void SetSourceURL(const std::string& _sourceURL);

                    /**
                     * 判断参数 SourceURL 是否已赋值
                     * @return SourceURL 是否已赋值
                     * 
                     */
                    bool SourceURLHasBeenSet() const;

                    /**
                     * 获取Source File Address
                     * @return SourceURLPath Source File Address
                     * 
                     */
                    std::string GetSourceURLPath() const;

                    /**
                     * 设置Source File Address
                     * @param _sourceURLPath Source File Address
                     * 
                     */
                    void SetSourceURLPath(const std::string& _sourceURLPath);

                    /**
                     * 判断参数 SourceURLPath 是否已赋值
                     * @return SourceURLPath 是否已赋值
                     * 
                     */
                    bool SourceURLPathHasBeenSet() const;

                private:

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
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * ID, handle risks
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * Front-end Index
                     */
                    std::string m_index;
                    bool m_indexHasBeenSet;

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
                     * Risky link
                     */
                    std::string m_uRL;
                    bool m_uRLHasBeenSet;

                    /**
                     * Risk File Address
                     */
                    std::string m_uRLPath;
                    bool m_uRLPathHasBeenSet;

                    /**
                     * Instance type
                     */
                    std::string m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * Type.
                     */
                    std::string m_detectEngine;
                    bool m_detectEngineHasBeenSet;

                    /**
                     * Result Description
                     */
                    std::string m_resultDescribe;
                    bool m_resultDescribeHasBeenSet;

                    /**
                     * Source Address URL
                     */
                    std::string m_sourceURL;
                    bool m_sourceURLHasBeenSet;

                    /**
                     * Source File Address
                     */
                    std::string m_sourceURLPath;
                    bool m_sourceURLPathHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_WEBSITERISK_H_
