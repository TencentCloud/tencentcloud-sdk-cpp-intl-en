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

#ifndef TENCENTCLOUD_MDL_V20200326_MODEL_MODIFYMEDIALIVEINPUTREQUEST_H_
#define TENCENTCLOUD_MDL_V20200326_MODEL_MODIFYMEDIALIVEINPUTREQUEST_H_

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
                * ModifyMediaLiveInput request structure.
                */
                class ModifyMediaLiveInputRequest : public AbstractModel
                {
                public:
                    ModifyMediaLiveInputRequest();
                    ~ModifyMediaLiveInputRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Media input ID.
                     * @return Id Media input ID.
                     */
                    std::string GetId() const;

                    /**
                     * 设置Media input ID.
                     * @param Id Media input ID.
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     */
                    bool IdHasBeenSet() const;

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
                     * 获取List of IDs of bound security groups.
                     * @return SecurityGroupIds List of IDs of bound security groups.
                     */
                    std::vector<std::string> GetSecurityGroupIds() const;

                    /**
                     * 设置List of IDs of bound security groups.
                     * @param SecurityGroupIds List of IDs of bound security groups.
                     */
                    void SetSecurityGroupIds(const std::vector<std::string>& _securityGroupIds);

                    /**
                     * 判断参数 SecurityGroupIds 是否已赋值
                     * @return SecurityGroupIds 是否已赋值
                     */
                    bool SecurityGroupIdsHasBeenSet() const;

                    /**
                     * 获取Input settings information.
One or two sets of settings need to be configured for RTMP_PUSH/RTMP_PULL/HLS_PULL/MP4_PULL.
This parameter can be left empty for RTP_PUSH and UDP_PUSH.
Note: if it is left empty or the array is empty, the original `InputSettings` value will be used.
                     * @return InputSettings Input settings information.
One or two sets of settings need to be configured for RTMP_PUSH/RTMP_PULL/HLS_PULL/MP4_PULL.
This parameter can be left empty for RTP_PUSH and UDP_PUSH.
Note: if it is left empty or the array is empty, the original `InputSettings` value will be used.
                     */
                    std::vector<InputSettingInfo> GetInputSettings() const;

                    /**
                     * 设置Input settings information.
One or two sets of settings need to be configured for RTMP_PUSH/RTMP_PULL/HLS_PULL/MP4_PULL.
This parameter can be left empty for RTP_PUSH and UDP_PUSH.
Note: if it is left empty or the array is empty, the original `InputSettings` value will be used.
                     * @param InputSettings Input settings information.
One or two sets of settings need to be configured for RTMP_PUSH/RTMP_PULL/HLS_PULL/MP4_PULL.
This parameter can be left empty for RTP_PUSH and UDP_PUSH.
Note: if it is left empty or the array is empty, the original `InputSettings` value will be used.
                     */
                    void SetInputSettings(const std::vector<InputSettingInfo>& _inputSettings);

                    /**
                     * 判断参数 InputSettings 是否已赋值
                     * @return InputSettings 是否已赋值
                     */
                    bool InputSettingsHasBeenSet() const;

                private:

                    /**
                     * Media input ID.
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * Media input name, which can contain 1–32 letters, digits, and underscores and must be unique at the region level.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * List of IDs of bound security groups.
                     */
                    std::vector<std::string> m_securityGroupIds;
                    bool m_securityGroupIdsHasBeenSet;

                    /**
                     * Input settings information.
One or two sets of settings need to be configured for RTMP_PUSH/RTMP_PULL/HLS_PULL/MP4_PULL.
This parameter can be left empty for RTP_PUSH and UDP_PUSH.
Note: if it is left empty or the array is empty, the original `InputSettings` value will be used.
                     */
                    std::vector<InputSettingInfo> m_inputSettings;
                    bool m_inputSettingsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MDL_V20200326_MODEL_MODIFYMEDIALIVEINPUTREQUEST_H_
