/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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

#ifndef TENCENTCLOUD_MDL_V20200326_MODEL_CREATEMEDIALIVEINPUTREQUEST_H_
#define TENCENTCLOUD_MDL_V20200326_MODEL_CREATEMEDIALIVEINPUTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mdl/v20200326/model/InputSettingInfo.h>


namespace TencentCloud
{
    namespace Mdl
    {
        namespace V20200326
        {
            namespace Model
            {
                /**
                * CreateMediaLiveInput request structure.
                */
                class CreateMediaLiveInputRequest : public AbstractModel
                {
                public:
                    CreateMediaLiveInputRequest();
                    ~CreateMediaLiveInputRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Media input name, which can contain 1–32 letters, digits, and underscores and must be unique at the region level.
                     * @return Name Media input name, which can contain 1–32 letters, digits, and underscores and must be unique at the region level.
                     */
                    std::string GetName() const;

                    /**
                     * 设置Media input name, which can contain 1–32 letters, digits, and underscores and must be unique at the region level.
                     * @param Name Media input name, which can contain 1–32 letters, digits, and underscores and must be unique at the region level.
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取Media input type.
Valid values: RTMP_PUSH/RTP_PUSH/UDP_PUSH/RTMP_PULL/HLS_PULL/MP4_PULL.
                     * @return Type Media input type.
Valid values: RTMP_PUSH/RTP_PUSH/UDP_PUSH/RTMP_PULL/HLS_PULL/MP4_PULL.
                     */
                    std::string GetType() const;

                    /**
                     * 设置Media input type.
Valid values: RTMP_PUSH/RTP_PUSH/UDP_PUSH/RTMP_PULL/HLS_PULL/MP4_PULL.
                     * @param Type Media input type.
Valid values: RTMP_PUSH/RTP_PUSH/UDP_PUSH/RTMP_PULL/HLS_PULL/MP4_PULL.
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取ID of the input security group to be bound.
Only one security group can be associated.
                     * @return SecurityGroupIds ID of the input security group to be bound.
Only one security group can be associated.
                     */
                    std::vector<std::string> GetSecurityGroupIds() const;

                    /**
                     * 设置ID of the input security group to be bound.
Only one security group can be associated.
                     * @param SecurityGroupIds ID of the input security group to be bound.
Only one security group can be associated.
                     */
                    void SetSecurityGroupIds(const std::vector<std::string>& _securityGroupIds);

                    /**
                     * 判断参数 SecurityGroupIds 是否已赋值
                     * @return SecurityGroupIds 是否已赋值
                     */
                    bool SecurityGroupIdsHasBeenSet() const;

                    /**
                     * 获取Input settings information, one or two sets of which need to be configured for RTMP_PUSH/RTMP_PULL/HLS_PULL/MP4_PULL.
                     * @return InputSettings Input settings information, one or two sets of which need to be configured for RTMP_PUSH/RTMP_PULL/HLS_PULL/MP4_PULL.
                     */
                    std::vector<InputSettingInfo> GetInputSettings() const;

                    /**
                     * 设置Input settings information, one or two sets of which need to be configured for RTMP_PUSH/RTMP_PULL/HLS_PULL/MP4_PULL.
                     * @param InputSettings Input settings information, one or two sets of which need to be configured for RTMP_PUSH/RTMP_PULL/HLS_PULL/MP4_PULL.
                     */
                    void SetInputSettings(const std::vector<InputSettingInfo>& _inputSettings);

                    /**
                     * 判断参数 InputSettings 是否已赋值
                     * @return InputSettings 是否已赋值
                     */
                    bool InputSettingsHasBeenSet() const;

                private:

                    /**
                     * Media input name, which can contain 1–32 letters, digits, and underscores and must be unique at the region level.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Media input type.
Valid values: RTMP_PUSH/RTP_PUSH/UDP_PUSH/RTMP_PULL/HLS_PULL/MP4_PULL.
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * ID of the input security group to be bound.
Only one security group can be associated.
                     */
                    std::vector<std::string> m_securityGroupIds;
                    bool m_securityGroupIdsHasBeenSet;

                    /**
                     * Input settings information, one or two sets of which need to be configured for RTMP_PUSH/RTMP_PULL/HLS_PULL/MP4_PULL.
                     */
                    std::vector<InputSettingInfo> m_inputSettings;
                    bool m_inputSettingsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MDL_V20200326_MODEL_CREATEMEDIALIVEINPUTREQUEST_H_
