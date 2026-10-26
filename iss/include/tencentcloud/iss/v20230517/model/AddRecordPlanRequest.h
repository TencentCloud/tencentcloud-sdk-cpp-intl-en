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

#ifndef TENCENTCLOUD_ISS_V20230517_MODEL_ADDRECORDPLANREQUEST_H_
#define TENCENTCLOUD_ISS_V20230517_MODEL_ADDRECORDPLANREQUEST_H_

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
                * AddRecordPlan request structure.
                */
                class AddRecordPlanRequest : public AbstractModel
                {
                public:
                    AddRecordPlanRequest();
                    ~AddRecordPlanRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Real-time cloud migration plan name. It supports Chinese, English, digits, _, and -, with a length not exceeding 32 characters. The plan name must be globally unique and cannot be empty or repeated.
                     * @return PlanName Real-time cloud migration plan name. It supports Chinese, English, digits, _, and -, with a length not exceeding 32 characters. The plan name must be globally unique and cannot be empty or repeated.
                     * 
                     */
                    std::string GetPlanName() const;

                    /**
                     * 设置Real-time cloud migration plan name. It supports Chinese, English, digits, _, and -, with a length not exceeding 32 characters. The plan name must be globally unique and cannot be empty or repeated.
                     * @param _planName Real-time cloud migration plan name. It supports Chinese, English, digits, _, and -, with a length not exceeding 32 characters. The plan name must be globally unique and cannot be empty or repeated.
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
                     * 获取Real-time cloud template ID
                     * @return TemplateId Real-time cloud template ID
                     * 
                     */
                    std::string GetTemplateId() const;

                    /**
                     * 设置Real-time cloud template ID
                     * @param _templateId Real-time cloud template ID
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
                     * 获取Lifecycle
                     * @return LifeCycle Lifecycle
                     * 
                     */
                    LifeCycleData GetLifeCycle() const;

                    /**
                     * 设置Lifecycle
                     * @param _lifeCycle Lifecycle
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
                     * 获取Cloud plan description. Supports only Chinese, English, digits, _, and -. Length not exceeding 128 characters.
                     * @return Describe Cloud plan description. Supports only Chinese, English, digits, _, and -. Length not exceeding 128 characters.
                     * 
                     */
                    std::string GetDescribe() const;

                    /**
                     * 设置Cloud plan description. Supports only Chinese, English, digits, _, and -. Length not exceeding 128 characters.
                     * @param _describe Cloud plan description. Supports only Chinese, English, digits, _, and -. Length not exceeding 128 characters.
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
                     * 获取Stream type. default: The stream type is not specified, and the default push type of the device is used. main: Main stream. sub: Substream. Other values are customized based on the device capacity. If not specified, the default type is used. The length cannot exceed 32 bytes.
                     * @return StreamType Stream type. default: The stream type is not specified, and the default push type of the device is used. main: Main stream. sub: Substream. Other values are customized based on the device capacity. If not specified, the default type is used. The length cannot exceed 32 bytes.
                     * 
                     */
                    std::string GetStreamType() const;

                    /**
                     * 设置Stream type. default: The stream type is not specified, and the default push type of the device is used. main: Main stream. sub: Substream. Other values are customized based on the device capacity. If not specified, the default type is used. The length cannot exceed 32 bytes.
                     * @param _streamType Stream type. default: The stream type is not specified, and the default push type of the device is used. main: Main stream. sub: Substream. Other values are customized based on the device capacity. If not specified, the default type is used. The length cannot exceed 32 bytes.
                     * 
                     */
                    void SetStreamType(const std::string& _streamType);

                    /**
                     * 判断参数 StreamType 是否已赋值
                     * @return StreamType 是否已赋值
                     * 
                     */
                    bool StreamTypeHasBeenSet() const;

                    /**
                     * 获取Channel information of the device to which video recording is added. You can add no more than 5000 channels only once, including the number of channels under the organizational unit directory.
                     * @return Channels Channel information of the device to which video recording is added. You can add no more than 5000 channels only once, including the number of channels under the organizational unit directory.
                     * 
                     */
                    std::vector<ChannelInfo> GetChannels() const;

                    /**
                     * 设置Channel information of the device to which video recording is added. You can add no more than 5000 channels only once, including the number of channels under the organizational unit directory.
                     * @param _channels Channel information of the device to which video recording is added. You can add no more than 5000 channels only once, including the number of channels under the organizational unit directory.
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
                     * 获取Add all device channels under the organization. Json array, can be empty. The total number of channels cannot exceed 5,000 (including the number of Channel fields).
                     * @return OrganizationId Add all device channels under the organization. Json array, can be empty. The total number of channels cannot exceed 5,000 (including the number of Channel fields).
                     * 
                     */
                    std::vector<std::string> GetOrganizationId() const;

                    /**
                     * 设置Add all device channels under the organization. Json array, can be empty. The total number of channels cannot exceed 5,000 (including the number of Channel fields).
                     * @param _organizationId Add all device channels under the organization. Json array, can be empty. The total number of channels cannot exceed 5,000 (including the number of Channel fields).
                     * 
                     */
                    void SetOrganizationId(const std::vector<std::string>& _organizationId);

                    /**
                     * 判断参数 OrganizationId 是否已赋值
                     * @return OrganizationId 是否已赋值
                     * 
                     */
                    bool OrganizationIdHasBeenSet() const;

                    /**
                     * 获取Video recording supplement mode (0: disabled, 1: enabled). If this field is not specified, it is not enabled by default.
                     * @return RepairMode Video recording supplement mode (0: disabled, 1: enabled). If this field is not specified, it is not enabled by default.
                     * 
                     */
                    int64_t GetRepairMode() const;

                    /**
                     * 设置Video recording supplement mode (0: disabled, 1: enabled). If this field is not specified, it is not enabled by default.
                     * @param _repairMode Video recording supplement mode (0: disabled, 1: enabled). If this field is not specified, it is not enabled by default.
                     * 
                     */
                    void SetRepairMode(const int64_t& _repairMode);

                    /**
                     * 判断参数 RepairMode 是否已赋值
                     * @return RepairMode 是否已赋值
                     * 
                     */
                    bool RepairModeHasBeenSet() const;

                private:

                    /**
                     * Real-time cloud migration plan name. It supports Chinese, English, digits, _, and -, with a length not exceeding 32 characters. The plan name must be globally unique and cannot be empty or repeated.
                     */
                    std::string m_planName;
                    bool m_planNameHasBeenSet;

                    /**
                     * Real-time cloud template ID
                     */
                    std::string m_templateId;
                    bool m_templateIdHasBeenSet;

                    /**
                     * Lifecycle
                     */
                    LifeCycleData m_lifeCycle;
                    bool m_lifeCycleHasBeenSet;

                    /**
                     * Cloud plan description. Supports only Chinese, English, digits, _, and -. Length not exceeding 128 characters.
                     */
                    std::string m_describe;
                    bool m_describeHasBeenSet;

                    /**
                     * Stream type. default: The stream type is not specified, and the default push type of the device is used. main: Main stream. sub: Substream. Other values are customized based on the device capacity. If not specified, the default type is used. The length cannot exceed 32 bytes.
                     */
                    std::string m_streamType;
                    bool m_streamTypeHasBeenSet;

                    /**
                     * Channel information of the device to which video recording is added. You can add no more than 5000 channels only once, including the number of channels under the organizational unit directory.
                     */
                    std::vector<ChannelInfo> m_channels;
                    bool m_channelsHasBeenSet;

                    /**
                     * Add all device channels under the organization. Json array, can be empty. The total number of channels cannot exceed 5,000 (including the number of Channel fields).
                     */
                    std::vector<std::string> m_organizationId;
                    bool m_organizationIdHasBeenSet;

                    /**
                     * Video recording supplement mode (0: disabled, 1: enabled). If this field is not specified, it is not enabled by default.
                     */
                    int64_t m_repairMode;
                    bool m_repairModeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ISS_V20230517_MODEL_ADDRECORDPLANREQUEST_H_
