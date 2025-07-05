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

#ifndef TENCENTCLOUD_MDL_V20200326_MODEL_MODIFYSTREAMLIVEINPUTREQUEST_H_
#define TENCENTCLOUD_MDL_V20200326_MODEL_MODIFYSTREAMLIVEINPUTREQUEST_H_

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
                * ModifyStreamLiveInput request structure.
                */
                class ModifyStreamLiveInputRequest : public AbstractModel
                {
                public:
                    ModifyStreamLiveInputRequest();
                    ~ModifyStreamLiveInputRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Input ID
                     * @return Id Input ID
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置Input ID
                     * @param _id Input ID
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
                     * 获取Input name, which can contain 1-32 case-sensitive letters, digits, and underscores and must be unique at the region level
                     * @return Name Input name, which can contain 1-32 case-sensitive letters, digits, and underscores and must be unique at the region level
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Input name, which can contain 1-32 case-sensitive letters, digits, and underscores and must be unique at the region level
                     * @param _name Input name, which can contain 1-32 case-sensitive letters, digits, and underscores and must be unique at the region level
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
                     * 获取List of the IDs of the security groups to attach
                     * @return SecurityGroupIds List of the IDs of the security groups to attach
                     * 
                     */
                    std::vector<std::string> GetSecurityGroupIds() const;

                    /**
                     * 设置List of the IDs of the security groups to attach
                     * @param _securityGroupIds List of the IDs of the security groups to attach
                     * 
                     */
                    void SetSecurityGroupIds(const std::vector<std::string>& _securityGroupIds);

                    /**
                     * 判断参数 SecurityGroupIds 是否已赋值
                     * @return SecurityGroupIds 是否已赋值
                     * 
                     */
                    bool SecurityGroupIdsHasBeenSet() const;

                    /**
                     * 获取Input settings. 
For the type:
`RTMP_PUSH`, `RTMP_PULL`, `HLS_PULL`,`RTSP_PULL`,`SRT_PULL` or `MP4_PULL`, 1 or 2 inputs of the corresponding type can be configured.
For the type:
`SRT_PUSH`, 0 or 2 inputs of the corresponding type can be configured.
This parameter can be left empty for RTP_PUSH and UDP_PUSH inputs.

Note: If this parameter is not specified or empty, the original input settings will be used.
                     * @return InputSettings Input settings. 
For the type:
`RTMP_PUSH`, `RTMP_PULL`, `HLS_PULL`,`RTSP_PULL`,`SRT_PULL` or `MP4_PULL`, 1 or 2 inputs of the corresponding type can be configured.
For the type:
`SRT_PUSH`, 0 or 2 inputs of the corresponding type can be configured.
This parameter can be left empty for RTP_PUSH and UDP_PUSH inputs.

Note: If this parameter is not specified or empty, the original input settings will be used.
                     * 
                     */
                    std::vector<InputSettingInfo> GetInputSettings() const;

                    /**
                     * 设置Input settings. 
For the type:
`RTMP_PUSH`, `RTMP_PULL`, `HLS_PULL`,`RTSP_PULL`,`SRT_PULL` or `MP4_PULL`, 1 or 2 inputs of the corresponding type can be configured.
For the type:
`SRT_PUSH`, 0 or 2 inputs of the corresponding type can be configured.
This parameter can be left empty for RTP_PUSH and UDP_PUSH inputs.

Note: If this parameter is not specified or empty, the original input settings will be used.
                     * @param _inputSettings Input settings. 
For the type:
`RTMP_PUSH`, `RTMP_PULL`, `HLS_PULL`,`RTSP_PULL`,`SRT_PULL` or `MP4_PULL`, 1 or 2 inputs of the corresponding type can be configured.
For the type:
`SRT_PUSH`, 0 or 2 inputs of the corresponding type can be configured.
This parameter can be left empty for RTP_PUSH and UDP_PUSH inputs.

Note: If this parameter is not specified or empty, the original input settings will be used.
                     * 
                     */
                    void SetInputSettings(const std::vector<InputSettingInfo>& _inputSettings);

                    /**
                     * 判断参数 InputSettings 是否已赋值
                     * @return InputSettings 是否已赋值
                     * 
                     */
                    bool InputSettingsHasBeenSet() const;

                private:

                    /**
                     * Input ID
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * Input name, which can contain 1-32 case-sensitive letters, digits, and underscores and must be unique at the region level
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * List of the IDs of the security groups to attach
                     */
                    std::vector<std::string> m_securityGroupIds;
                    bool m_securityGroupIdsHasBeenSet;

                    /**
                     * Input settings. 
For the type:
`RTMP_PUSH`, `RTMP_PULL`, `HLS_PULL`,`RTSP_PULL`,`SRT_PULL` or `MP4_PULL`, 1 or 2 inputs of the corresponding type can be configured.
For the type:
`SRT_PUSH`, 0 or 2 inputs of the corresponding type can be configured.
This parameter can be left empty for RTP_PUSH and UDP_PUSH inputs.

Note: If this parameter is not specified or empty, the original input settings will be used.
                     */
                    std::vector<InputSettingInfo> m_inputSettings;
                    bool m_inputSettingsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MDL_V20200326_MODEL_MODIFYSTREAMLIVEINPUTREQUEST_H_
