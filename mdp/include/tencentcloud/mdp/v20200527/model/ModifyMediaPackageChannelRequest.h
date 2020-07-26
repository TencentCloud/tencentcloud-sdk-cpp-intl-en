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

#ifndef TENCENTCLOUD_MDP_V20200527_MODEL_MODIFYMEDIAPACKAGECHANNELREQUEST_H_
#define TENCENTCLOUD_MDP_V20200527_MODEL_MODIFYMEDIAPACKAGECHANNELREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mdp
    {
        namespace V20200527
        {
            namespace Model
            {
                /**
                * ModifyMediaPackageChannel request structure.
                */
                class ModifyMediaPackageChannelRequest : public AbstractModel
                {
                public:
                    ModifyMediaPackageChannelRequest();
                    ~ModifyMediaPackageChannelRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Channel ID.
                     * @return Id Channel ID.
                     */
                    std::string GetId() const;

                    /**
                     * 设置Channel ID.
                     * @param Id Channel ID.
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取The channel name after modification.
                     * @return Name The channel name after modification.
                     */
                    std::string GetName() const;

                    /**
                     * 设置The channel name after modification.
                     * @param Name The channel name after modification.
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取The channel protocol after modification. Valid values: HLS, DASH.
                     * @return Protocol The channel protocol after modification. Valid values: HLS, DASH.
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置The channel protocol after modification. Valid values: HLS, DASH.
                     * @param Protocol The channel protocol after modification. Valid values: HLS, DASH.
                     */
                    void SetProtocol(const std::string& _protocol);

                    /**
                     * 判断参数 Protocol 是否已赋值
                     * @return Protocol 是否已赋值
                     */
                    bool ProtocolHasBeenSet() const;

                private:

                    /**
                     * Channel ID.
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * The channel name after modification.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * The channel protocol after modification. Valid values: HLS, DASH.
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MDP_V20200527_MODEL_MODIFYMEDIAPACKAGECHANNELREQUEST_H_
