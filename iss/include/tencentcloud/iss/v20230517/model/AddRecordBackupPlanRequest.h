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

#ifndef TENCENTCLOUD_ISS_V20230517_MODEL_ADDRECORDBACKUPPLANREQUEST_H_
#define TENCENTCLOUD_ISS_V20230517_MODEL_ADDRECORDBACKUPPLANREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/iss/v20230517/model/LifeCycleData.h>
#include <tencentcloud/iss/v20230517/model/ChannelInfo.h>


namespace TencentCloud
{
    namespace Iss
    {
        namespace V20230517
        {
            namespace Model
            {
                /**
                * AddRecordBackupPlan request structure.
                */
                class AddRecordBackupPlanRequest : public AbstractModel
                {
                public:
                    AddRecordBackupPlanRequest();
                    ~AddRecordBackupPlanRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Recording template ID (template ID associated with the recording schedule, obtained from the ListRecordBackupTemplates API for querying the video cloud template list)
                     * @return TemplateId Recording template ID (template ID associated with the recording schedule, obtained from the ListRecordBackupTemplates API for querying the video cloud template list)
                     * 
                     */
                    std::string GetTemplateId() const;

                    /**
                     * 设置Recording template ID (template ID associated with the recording schedule, obtained from the ListRecordBackupTemplates API for querying the video cloud template list)
                     * @param _templateId Recording template ID (template ID associated with the recording schedule, obtained from the ListRecordBackupTemplates API for querying the video cloud template list)
                     * 
                     */
                    void SetTemplateId(const std::string& _templateId);

                    /**
                     * 判断参数 TemplateId 是否已赋值
                     * @return TemplateId 是否已赋值
                     * 
                     */
                    bool TemplateIdHasBeenSet() const;

                    /**
                     * 获取Recording schedule name (supports Chinese, English, digits, _ and -. The length cannot exceed 32 characters. The plan name must be globally unique and cannot be empty or duplicated.)
                     * @return PlanName Recording schedule name (supports Chinese, English, digits, _ and -. The length cannot exceed 32 characters. The plan name must be globally unique and cannot be empty or duplicated.)
                     * 
                     */
                    std::string GetPlanName() const;

                    /**
                     * 设置Recording schedule name (supports Chinese, English, digits, _ and -. The length cannot exceed 32 characters. The plan name must be globally unique and cannot be empty or duplicated.)
                     * @param _planName Recording schedule name (supports Chinese, English, digits, _ and -. The length cannot exceed 32 characters. The plan name must be globally unique and cannot be empty or duplicated.)
                     * 
                     */
                    void SetPlanName(const std::string& _planName);

                    /**
                     * 判断参数 PlanName 是否已赋值
                     * @return PlanName 是否已赋值
                     * 
                     */
                    bool PlanNameHasBeenSet() const;

                    /**
                     * 获取Video recording plan description (only supports Chinese, English, digits, _, -, length not exceeding 128 characters)
                     * @return Describe Video recording plan description (only supports Chinese, English, digits, _, -, length not exceeding 128 characters)
                     * 
                     */
                    std::string GetDescribe() const;

                    /**
                     * 设置Video recording plan description (only supports Chinese, English, digits, _, -, length not exceeding 128 characters)
                     * @param _describe Video recording plan description (only supports Chinese, English, digits, _, -, length not exceeding 128 characters)
                     * 
                     */
                    void SetDescribe(const std::string& _describe);

                    /**
                     * 判断参数 Describe 是否已赋值
                     * @return Describe 是否已赋值
                     * 
                     */
                    bool DescribeHasBeenSet() const;

                    /**
                     * 获取Lifecycle (video recording file lifecycle settings, the time when cold and hot storage is managed for files)
                     * @return LifeCycle Lifecycle (video recording file lifecycle settings, the time when cold and hot storage is managed for files)
                     * 
                     */
                    LifeCycleData GetLifeCycle() const;

                    /**
                     * 设置Lifecycle (video recording file lifecycle settings, the time when cold and hot storage is managed for files)
                     * @param _lifeCycle Lifecycle (video recording file lifecycle settings, the time when cold and hot storage is managed for files)
                     * 
                     */
                    void SetLifeCycle(const LifeCycleData& _lifeCycle);

                    /**
                     * 判断参数 LifeCycle 是否已赋值
                     * @return LifeCycle 是否已赋值
                     * 
                     */
                    bool LifeCycleHasBeenSet() const;

                    /**
                     * 获取Channel and the device to which the channel belongs (channel information of the device to which a video recording is added. Add no more than 5,000 channels at a time, including the number of channels under the organizational unit directory).
                     * @return Channels Channel and the device to which the channel belongs (channel information of the device to which a video recording is added. Add no more than 5,000 channels at a time, including the number of channels under the organizational unit directory).
                     * 
                     */
                    std::vector<ChannelInfo> GetChannels() const;

                    /**
                     * 设置Channel and the device to which the channel belongs (channel information of the device to which a video recording is added. Add no more than 5,000 channels at a time, including the number of channels under the organizational unit directory).
                     * @param _channels Channel and the device to which the channel belongs (channel information of the device to which a video recording is added. Add no more than 5,000 channels at a time, including the number of channels under the organizational unit directory).
                     * 
                     */
                    void SetChannels(const std::vector<ChannelInfo>& _channels);

                    /**
                     * 判断参数 Channels 是否已赋值
                     * @return Channels 是否已赋值
                     * 
                     */
                    bool ChannelsHasBeenSet() const;

                    /**
                     * 获取Add all device channels under the organizational unit directory (Json array, can be empty, total number of channels no more than 5000, including the number of Channel fields)
                     * @return OrganizationId Add all device channels under the organizational unit directory (Json array, can be empty, total number of channels no more than 5000, including the number of Channel fields)
                     * 
                     */
                    std::vector<std::string> GetOrganizationId() const;

                    /**
                     * 设置Add all device channels under the organizational unit directory (Json array, can be empty, total number of channels no more than 5000, including the number of Channel fields)
                     * @param _organizationId Add all device channels under the organizational unit directory (Json array, can be empty, total number of channels no more than 5000, including the number of Channel fields)
                     * 
                     */
                    void SetOrganizationId(const std::vector<std::string>& _organizationId);

                    /**
                     * 判断参数 OrganizationId 是否已赋值
                     * @return OrganizationId 是否已赋值
                     * 
                     */
                    bool OrganizationIdHasBeenSet() const;

                private:

                    /**
                     * Recording template ID (template ID associated with the recording schedule, obtained from the ListRecordBackupTemplates API for querying the video cloud template list)
                     */
                    std::string m_templateId;
                    bool m_templateIdHasBeenSet;

                    /**
                     * Recording schedule name (supports Chinese, English, digits, _ and -. The length cannot exceed 32 characters. The plan name must be globally unique and cannot be empty or duplicated.)
                     */
                    std::string m_planName;
                    bool m_planNameHasBeenSet;

                    /**
                     * Video recording plan description (only supports Chinese, English, digits, _, -, length not exceeding 128 characters)
                     */
                    std::string m_describe;
                    bool m_describeHasBeenSet;

                    /**
                     * Lifecycle (video recording file lifecycle settings, the time when cold and hot storage is managed for files)
                     */
                    LifeCycleData m_lifeCycle;
                    bool m_lifeCycleHasBeenSet;

                    /**
                     * Channel and the device to which the channel belongs (channel information of the device to which a video recording is added. Add no more than 5,000 channels at a time, including the number of channels under the organizational unit directory).
                     */
                    std::vector<ChannelInfo> m_channels;
                    bool m_channelsHasBeenSet;

                    /**
                     * Add all device channels under the organizational unit directory (Json array, can be empty, total number of channels no more than 5000, including the number of Channel fields)
                     */
                    std::vector<std::string> m_organizationId;
                    bool m_organizationIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ISS_V20230517_MODEL_ADDRECORDBACKUPPLANREQUEST_H_
