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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_NETWORKAPPLICATIONDETAIL_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_NETWORKAPPLICATIONDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * Web Application Task Detail
                */
                class NetworkApplicationDetail : public AbstractModel
                {
                public:
                    NetworkApplicationDetail();
                    ~NetworkApplicationDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Web application Id
                     * @return NetworkAppId Web application Id
                     * 
                     */
                    std::string GetNetworkAppId() const;

                    /**
                     * 设置Web application Id
                     * @param _networkAppId Web application Id
                     * 
                     */
                    void SetNetworkAppId(const std::string& _networkAppId);

                    /**
                     * 判断参数 NetworkAppId 是否已赋值
                     * @return NetworkAppId 是否已赋值
                     * 
                     */
                    bool NetworkAppIdHasBeenSet() const;

                    /**
                     * 获取network app name
                     * @return Name network app name
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置network app name
                     * @param _name network app name
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
                     * 获取Region code
                     * @return Region Region code
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置Region code
                     * @param _region Region code
                     * 
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取log topic id
                     * @return TopicId log topic id
                     * 
                     */
                    std::string GetTopicId() const;

                    /**
                     * 设置log topic id
                     * @param _topicId log topic id
                     * 
                     */
                    void SetTopicId(const std::string& _topicId);

                    /**
                     * 判断参数 TopicId 是否已赋值
                     * @return TopicId 是否已赋值
                     * 
                     */
                    bool TopicIdHasBeenSet() const;

                    /**
                     * 获取Logset id
                     * @return LogsetId Logset id
                     * 
                     */
                    std::string GetLogsetId() const;

                    /**
                     * 设置Logset id
                     * @param _logsetId Logset id
                     * 
                     */
                    void SetLogsetId(const std::string& _logsetId);

                    /**
                     * 判断参数 LogsetId 是否已赋值
                     * @return LogsetId 是否已赋值
                     * 
                     */
                    bool LogsetIdHasBeenSet() const;

                    /**
                     * 获取Application token
                     * @return Token Application token
                     * 
                     */
                    std::string GetToken() const;

                    /**
                     * 设置Application token
                     * @param _token Application token
                     * 
                     */
                    void SetToken(const std::string& _token);

                    /**
                     * 判断参数 Token 是否已赋值
                     * @return Token 是否已赋值
                     * 
                     */
                    bool TokenHasBeenSet() const;

                    /**
                     * 获取Host Account ID
                     * @return Uin Host Account ID
                     * 
                     */
                    uint64_t GetUin() const;

                    /**
                     * 设置Host Account ID
                     * @param _uin Host Account ID
                     * 
                     */
                    void SetUin(const uint64_t& _uin);

                    /**
                     * 判断参数 Uin 是否已赋值
                     * @return Uin 是否已赋值
                     * 
                     */
                    bool UinHasBeenSet() const;

                    /**
                     * 获取Sub-account ID
                     * @return SubUin Sub-account ID
                     * 
                     */
                    uint64_t GetSubUin() const;

                    /**
                     * 设置Sub-account ID
                     * @param _subUin Sub-account ID
                     * 
                     */
                    void SetSubUin(const uint64_t& _subUin);

                    /**
                     * 判断参数 SubUin 是否已赋值
                     * @return SubUin 是否已赋值
                     * 
                     */
                    bool SubUinHasBeenSet() const;

                    /**
                     * 获取Creation time (a second-level timestamp)
                     * @return CreateTime Creation time (a second-level timestamp)
                     * 
                     */
                    uint64_t GetCreateTime() const;

                    /**
                     * 设置Creation time (a second-level timestamp)
                     * @param _createTime Creation time (a second-level timestamp)
                     * 
                     */
                    void SetCreateTime(const uint64_t& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取Update time (a second-level timestamp)
                     * @return UpdateTime Update time (a second-level timestamp)
                     * 
                     */
                    uint64_t GetUpdateTime() const;

                    /**
                     * 设置Update time (a second-level timestamp)
                     * @param _updateTime Update time (a second-level timestamp)
                     * 
                     */
                    void SetUpdateTime(const uint64_t& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                private:

                    /**
                     * Web application Id
                     */
                    std::string m_networkAppId;
                    bool m_networkAppIdHasBeenSet;

                    /**
                     * network app name
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Region code
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * log topic id
                     */
                    std::string m_topicId;
                    bool m_topicIdHasBeenSet;

                    /**
                     * Logset id
                     */
                    std::string m_logsetId;
                    bool m_logsetIdHasBeenSet;

                    /**
                     * Application token
                     */
                    std::string m_token;
                    bool m_tokenHasBeenSet;

                    /**
                     * Host Account ID
                     */
                    uint64_t m_uin;
                    bool m_uinHasBeenSet;

                    /**
                     * Sub-account ID
                     */
                    uint64_t m_subUin;
                    bool m_subUinHasBeenSet;

                    /**
                     * Creation time (a second-level timestamp)
                     */
                    uint64_t m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Update time (a second-level timestamp)
                     */
                    uint64_t m_updateTime;
                    bool m_updateTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_NETWORKAPPLICATIONDETAIL_H_
