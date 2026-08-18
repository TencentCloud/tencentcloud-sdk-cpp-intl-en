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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_DASHBOARDINFO_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_DASHBOARDINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cls/v20201016/model/Tag.h>
#include <tencentcloud/cls/v20201016/model/DashboardTopicInfo.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * Dashboard information
                */
                class DashboardInfo : public AbstractModel
                {
                public:
                    DashboardInfo();
                    ~DashboardInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Dashboard ID
                     * @return DashboardId Dashboard ID
                     * 
                     */
                    std::string GetDashboardId() const;

                    /**
                     * 设置Dashboard ID
                     * @param _dashboardId Dashboard ID
                     * 
                     */
                    void SetDashboardId(const std::string& _dashboardId);

                    /**
                     * 判断参数 DashboardId 是否已赋值
                     * @return DashboardId 是否已赋值
                     * 
                     */
                    bool DashboardIdHasBeenSet() const;

                    /**
                     * 获取Dashboard name
                     * @return DashboardName Dashboard name
                     * 
                     */
                    std::string GetDashboardName() const;

                    /**
                     * 设置Dashboard name
                     * @param _dashboardName Dashboard name
                     * 
                     */
                    void SetDashboardName(const std::string& _dashboardName);

                    /**
                     * 判断参数 DashboardName 是否已赋值
                     * @return DashboardName 是否已赋值
                     * 
                     */
                    bool DashboardNameHasBeenSet() const;

                    /**
                     * 获取Dashboard data
                     * @return Data Dashboard data
                     * 
                     */
                    std::string GetData() const;

                    /**
                     * 设置Dashboard data
                     * @param _data Dashboard data
                     * 
                     */
                    void SetData(const std::string& _data);

                    /**
                     * 判断参数 Data 是否已赋值
                     * @return Data 是否已赋值
                     * 
                     */
                    bool DataHasBeenSet() const;

                    /**
                     * 获取Time when the dashboard was created. Format: YYYY-MM-DD HH:MM:SS
                     * @return CreateTime Time when the dashboard was created. Format: YYYY-MM-DD HH:MM:SS
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Time when the dashboard was created. Format: YYYY-MM-DD HH:MM:SS
                     * @param _createTime Time when the dashboard was created. Format: YYYY-MM-DD HH:MM:SS
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
                     * 获取If AssumerUin is not empty, it indicates the UIN of the service party that created the log topic.
                     * @return AssumerUin If AssumerUin is not empty, it indicates the UIN of the service party that created the log topic.
                     * 
                     */
                    uint64_t GetAssumerUin() const;

                    /**
                     * 设置If AssumerUin is not empty, it indicates the UIN of the service party that created the log topic.
                     * @param _assumerUin If AssumerUin is not empty, it indicates the UIN of the service party that created the log topic.
                     * 
                     */
                    void SetAssumerUin(const uint64_t& _assumerUin);

                    /**
                     * 判断参数 AssumerUin 是否已赋值
                     * @return AssumerUin 是否已赋值
                     * 
                     */
                    bool AssumerUinHasBeenSet() const;

                    /**
                     * 获取If RoleName is not empty, it indicates the role of the service provider creating the log set.
                     * @return RoleName If RoleName is not empty, it indicates the role of the service provider creating the log set.
                     * 
                     */
                    std::string GetRoleName() const;

                    /**
                     * 设置If RoleName is not empty, it indicates the role of the service provider creating the log set.
                     * @param _roleName If RoleName is not empty, it indicates the role of the service provider creating the log set.
                     * 
                     */
                    void SetRoleName(const std::string& _roleName);

                    /**
                     * 判断参数 RoleName 是否已赋值
                     * @return RoleName 是否已赋值
                     * 
                     */
                    bool RoleNameHasBeenSet() const;

                    /**
                     * 获取If AssumerName is not empty, it indicates the name of the service provider creating the log topic.
                     * @return AssumerName If AssumerName is not empty, it indicates the name of the service provider creating the log topic.
                     * 
                     */
                    std::string GetAssumerName() const;

                    /**
                     * 设置If AssumerName is not empty, it indicates the name of the service provider creating the log topic.
                     * @param _assumerName If AssumerName is not empty, it indicates the name of the service provider creating the log topic.
                     * 
                     */
                    void SetAssumerName(const std::string& _assumerName);

                    /**
                     * 判断参数 AssumerName 是否已赋值
                     * @return AssumerName 是否已赋值
                     * 
                     */
                    bool AssumerNameHasBeenSet() const;

                    /**
                     * 获取Information of tag bound to log topic
                     * @return Tags Information of tag bound to log topic
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置Information of tag bound to log topic
                     * @param _tags Information of tag bound to log topic
                     * 
                     */
                    void SetTags(const std::vector<Tag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取Dashboard region: For compatibility with old regions.
                     * @return DashboardRegion Dashboard region: For compatibility with old regions.
                     * 
                     */
                    std::string GetDashboardRegion() const;

                    /**
                     * 设置Dashboard region: For compatibility with old regions.
                     * @param _dashboardRegion Dashboard region: For compatibility with old regions.
                     * 
                     */
                    void SetDashboardRegion(const std::string& _dashboardRegion);

                    /**
                     * 判断参数 DashboardRegion 是否已赋值
                     * @return DashboardRegion 是否已赋值
                     * 
                     */
                    bool DashboardRegionHasBeenSet() const;

                    /**
                     * 获取Modify dashboard time. Format: YYYY-MM-DD HH:MM:SS
                     * @return UpdateTime Modify dashboard time. Format: YYYY-MM-DD HH:MM:SS
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置Modify dashboard time. Format: YYYY-MM-DD HH:MM:SS
                     * @param _updateTime Modify dashboard time. Format: YYYY-MM-DD HH:MM:SS
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取Topic-related information corresponding to the dashboard
                     * @return DashboardTopicInfos Topic-related information corresponding to the dashboard
                     * 
                     */
                    std::vector<DashboardTopicInfo> GetDashboardTopicInfos() const;

                    /**
                     * 设置Topic-related information corresponding to the dashboard
                     * @param _dashboardTopicInfos Topic-related information corresponding to the dashboard
                     * 
                     */
                    void SetDashboardTopicInfos(const std::vector<DashboardTopicInfo>& _dashboardTopicInfos);

                    /**
                     * 判断参数 DashboardTopicInfos 是否已赋值
                     * @return DashboardTopicInfos 是否已赋值
                     * 
                     */
                    bool DashboardTopicInfosHasBeenSet() const;

                private:

                    /**
                     * Dashboard ID
                     */
                    std::string m_dashboardId;
                    bool m_dashboardIdHasBeenSet;

                    /**
                     * Dashboard name
                     */
                    std::string m_dashboardName;
                    bool m_dashboardNameHasBeenSet;

                    /**
                     * Dashboard data
                     */
                    std::string m_data;
                    bool m_dataHasBeenSet;

                    /**
                     * Time when the dashboard was created. Format: YYYY-MM-DD HH:MM:SS
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * If AssumerUin is not empty, it indicates the UIN of the service party that created the log topic.
                     */
                    uint64_t m_assumerUin;
                    bool m_assumerUinHasBeenSet;

                    /**
                     * If RoleName is not empty, it indicates the role of the service provider creating the log set.
                     */
                    std::string m_roleName;
                    bool m_roleNameHasBeenSet;

                    /**
                     * If AssumerName is not empty, it indicates the name of the service provider creating the log topic.
                     */
                    std::string m_assumerName;
                    bool m_assumerNameHasBeenSet;

                    /**
                     * Information of tag bound to log topic
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * Dashboard region: For compatibility with old regions.
                     */
                    std::string m_dashboardRegion;
                    bool m_dashboardRegionHasBeenSet;

                    /**
                     * Modify dashboard time. Format: YYYY-MM-DD HH:MM:SS
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * Topic-related information corresponding to the dashboard
                     */
                    std::vector<DashboardTopicInfo> m_dashboardTopicInfos;
                    bool m_dashboardTopicInfosHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_DASHBOARDINFO_H_
