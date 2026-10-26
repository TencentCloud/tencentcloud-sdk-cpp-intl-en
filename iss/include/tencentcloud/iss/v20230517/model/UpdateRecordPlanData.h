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

#ifndef TENCENTCLOUD_ISS_V20230517_MODEL_UPDATERECORDPLANDATA_H_
#define TENCENTCLOUD_ISS_V20230517_MODEL_UPDATERECORDPLANDATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * Modify the data of the real-time Cloud Recording plan
                */
                class UpdateRecordPlanData : public AbstractModel
                {
                public:
                    UpdateRecordPlanData();
                    ~UpdateRecordPlanData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Cloud migration plan name, supporting only Chinese, English, digits, _, -, with a length not exceeding 32 characters. The plan name must be globally unique and cannot be empty or duplicated. This field is not required if the name is not modified.
                     * @return PlanName Cloud migration plan name, supporting only Chinese, English, digits, _, -, with a length not exceeding 32 characters. The plan name must be globally unique and cannot be empty or duplicated. This field is not required if the name is not modified.
                     * 
                     */
                    std::string GetPlanName() const;

                    /**
                     * 设置Cloud migration plan name, supporting only Chinese, English, digits, _, -, with a length not exceeding 32 characters. The plan name must be globally unique and cannot be empty or duplicated. This field is not required if the name is not modified.
                     * @param _planName Cloud migration plan name, supporting only Chinese, English, digits, _, -, with a length not exceeding 32 characters. The plan name must be globally unique and cannot be empty or duplicated. This field is not required if the name is not modified.
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
                     * 获取Cloud template ID. This field is not required if the template ID is not modified.
                     * @return TemplateId Cloud template ID. This field is not required if the template ID is not modified.
                     * 
                     */
                    std::string GetTemplateId() const;

                    /**
                     * 设置Cloud template ID. This field is not required if the template ID is not modified.
                     * @param _templateId Cloud template ID. This field is not required if the template ID is not modified.
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
                     * 获取Usage plan description. It can contain only Chinese characters, English letters, digits, underscores (_), and hyphens (-), with a length not exceeding 128 characters. This field is not required if you do not modify the description.
                     * @return Describe Usage plan description. It can contain only Chinese characters, English letters, digits, underscores (_), and hyphens (-), with a length not exceeding 128 characters. This field is not required if you do not modify the description.
                     * 
                     */
                    std::string GetDescribe() const;

                    /**
                     * 设置Usage plan description. It can contain only Chinese characters, English letters, digits, underscores (_), and hyphens (-), with a length not exceeding 128 characters. This field is not required if you do not modify the description.
                     * @param _describe Usage plan description. It can contain only Chinese characters, English letters, digits, underscores (_), and hyphens (-), with a length not exceeding 128 characters. This field is not required if you do not modify the description.
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
                     * 获取Stream type. default: The stream type is not specified, and the default push type of the device is used. main: main stream. sub: substream. Other: custom based on the device capability set. The length cannot exceed 32 bytes.
                     * @return StreamType Stream type. default: The stream type is not specified, and the default push type of the device is used. main: main stream. sub: substream. Other: custom based on the device capability set. The length cannot exceed 32 bytes.
                     * 
                     */
                    std::string GetStreamType() const;

                    /**
                     * 设置Stream type. default: The stream type is not specified, and the default push type of the device is used. main: main stream. sub: substream. Other: custom based on the device capability set. The length cannot exceed 32 bytes.
                     * @param _streamType Stream type. default: The stream type is not specified, and the default push type of the device is used. main: main stream. sub: substream. Other: custom based on the device capability set. The length cannot exceed 32 bytes.
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
                     * 获取Lifecycle, file lifecycle settings, the time when cold and hot storage of files is managed. This field is not required if lifecycle is not modified.
                     * @return LifeCycle Lifecycle, file lifecycle settings, the time when cold and hot storage of files is managed. This field is not required if lifecycle is not modified.
                     * 
                     */
                    LifeCycleData GetLifeCycle() const;

                    /**
                     * 设置Lifecycle, file lifecycle settings, the time when cold and hot storage of files is managed. This field is not required if lifecycle is not modified.
                     * @param _lifeCycle Lifecycle, file lifecycle settings, the time when cold and hot storage of files is managed. This field is not required if lifecycle is not modified.
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
                     * 获取Device channels to be added. Json array. This field is not required when no channels are added. The total number of channels added at once cannot exceed 5,000, including the number of channels under the organization directory.
                     * @return Add Device channels to be added. Json array. This field is not required when no channels are added. The total number of channels added at once cannot exceed 5,000, including the number of channels under the organization directory.
                     * 
                     */
                    std::vector<ChannelInfo> GetAdd() const;

                    /**
                     * 设置Device channels to be added. Json array. This field is not required when no channels are added. The total number of channels added at once cannot exceed 5,000, including the number of channels under the organization directory.
                     * @param _add Device channels to be added. Json array. This field is not required when no channels are added. The total number of channels added at once cannot exceed 5,000, including the number of channels under the organization directory.
                     * 
                     */
                    void SetAdd(const std::vector<ChannelInfo>& _add);

                    /**
                     * 判断参数 Add 是否已赋值
                     * @return Add 是否已赋值
                     * 
                     */
                    bool AddHasBeenSet() const;

                    /**
                     * 获取Device channels to delete. Json array. The content is the IDs of the device channels to delete. This field is not required if no device channel is deleted.
                     * @return Del Device channels to delete. Json array. The content is the IDs of the device channels to delete. This field is not required if no device channel is deleted.
                     * 
                     */
                    std::vector<std::string> GetDel() const;

                    /**
                     * 设置Device channels to delete. Json array. The content is the IDs of the device channels to delete. This field is not required if no device channel is deleted.
                     * @param _del Device channels to delete. Json array. The content is the IDs of the device channels to delete. This field is not required if no device channel is deleted.
                     * 
                     */
                    void SetDel(const std::vector<std::string>& _del);

                    /**
                     * 判断参数 Del 是否已赋值
                     * @return Del 是否已赋值
                     * 
                     */
                    bool DelHasBeenSet() const;

                    /**
                     * 获取Organizational directory ID. Add all device channels under the organizational directory. Json array. Can be empty. And the total number of channels is no more than 5,000 (including the number of channels added in the Add field).
                     * @return OrganizationId Organizational directory ID. Add all device channels under the organizational directory. Json array. Can be empty. And the total number of channels is no more than 5,000 (including the number of channels added in the Add field).
                     * 
                     */
                    std::vector<std::string> GetOrganizationId() const;

                    /**
                     * 设置Organizational directory ID. Add all device channels under the organizational directory. Json array. Can be empty. And the total number of channels is no more than 5,000 (including the number of channels added in the Add field).
                     * @param _organizationId Organizational directory ID. Add all device channels under the organizational directory. Json array. Can be empty. And the total number of channels is no more than 5,000 (including the number of channels added in the Add field).
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
                     * 获取Video recording supplement mode (0: not enabled, 1: enabled)
                     * @return RepairMode Video recording supplement mode (0: not enabled, 1: enabled)
                     * 
                     */
                    int64_t GetRepairMode() const;

                    /**
                     * 设置Video recording supplement mode (0: not enabled, 1: enabled)
                     * @param _repairMode Video recording supplement mode (0: not enabled, 1: enabled)
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
                     * Cloud migration plan name, supporting only Chinese, English, digits, _, -, with a length not exceeding 32 characters. The plan name must be globally unique and cannot be empty or duplicated. This field is not required if the name is not modified.
                     */
                    std::string m_planName;
                    bool m_planNameHasBeenSet;

                    /**
                     * Cloud template ID. This field is not required if the template ID is not modified.
                     */
                    std::string m_templateId;
                    bool m_templateIdHasBeenSet;

                    /**
                     * Usage plan description. It can contain only Chinese characters, English letters, digits, underscores (_), and hyphens (-), with a length not exceeding 128 characters. This field is not required if you do not modify the description.
                     */
                    std::string m_describe;
                    bool m_describeHasBeenSet;

                    /**
                     * Stream type. default: The stream type is not specified, and the default push type of the device is used. main: main stream. sub: substream. Other: custom based on the device capability set. The length cannot exceed 32 bytes.
                     */
                    std::string m_streamType;
                    bool m_streamTypeHasBeenSet;

                    /**
                     * Lifecycle, file lifecycle settings, the time when cold and hot storage of files is managed. This field is not required if lifecycle is not modified.
                     */
                    LifeCycleData m_lifeCycle;
                    bool m_lifeCycleHasBeenSet;

                    /**
                     * Device channels to be added. Json array. This field is not required when no channels are added. The total number of channels added at once cannot exceed 5,000, including the number of channels under the organization directory.
                     */
                    std::vector<ChannelInfo> m_add;
                    bool m_addHasBeenSet;

                    /**
                     * Device channels to delete. Json array. The content is the IDs of the device channels to delete. This field is not required if no device channel is deleted.
                     */
                    std::vector<std::string> m_del;
                    bool m_delHasBeenSet;

                    /**
                     * Organizational directory ID. Add all device channels under the organizational directory. Json array. Can be empty. And the total number of channels is no more than 5,000 (including the number of channels added in the Add field).
                     */
                    std::vector<std::string> m_organizationId;
                    bool m_organizationIdHasBeenSet;

                    /**
                     * Video recording supplement mode (0: not enabled, 1: enabled)
                     */
                    int64_t m_repairMode;
                    bool m_repairModeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ISS_V20230517_MODEL_UPDATERECORDPLANDATA_H_
