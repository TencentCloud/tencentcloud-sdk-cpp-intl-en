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

#ifndef TENCENTCLOUD_TEM_V20210701_MODEL_MODIFYCONFIGDATAREQUEST_H_
#define TENCENTCLOUD_TEM_V20210701_MODEL_MODIFYCONFIGDATAREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tem/v20210701/model/Pair.h>


namespace TencentCloud
{
    namespace Tem
    {
        namespace V20210701
        {
            namespace Model
            {
                /**
                * ModifyConfigData request structure.
                */
                class ModifyConfigDataRequest : public AbstractModel
                {
                public:
                    ModifyConfigDataRequest();
                    ~ModifyConfigDataRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Environment ID
                     * @return EnvironmentId Environment ID
                     */
                    std::string GetEnvironmentId() const;

                    /**
                     * 设置Environment ID
                     * @param EnvironmentId Environment ID
                     */
                    void SetEnvironmentId(const std::string& _environmentId);

                    /**
                     * 判断参数 EnvironmentId 是否已赋值
                     * @return EnvironmentId 是否已赋值
                     */
                    bool EnvironmentIdHasBeenSet() const;

                    /**
                     * 获取Configuration name
                     * @return Name Configuration name
                     */
                    std::string GetName() const;

                    /**
                     * 设置Configuration name
                     * @param Name Configuration name
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取Source channel. Please keep the default value.
                     * @return SourceChannel Source channel. Please keep the default value.
                     */
                    int64_t GetSourceChannel() const;

                    /**
                     * 设置Source channel. Please keep the default value.
                     * @param SourceChannel Source channel. Please keep the default value.
                     */
                    void SetSourceChannel(const int64_t& _sourceChannel);

                    /**
                     * 判断参数 SourceChannel 是否已赋值
                     * @return SourceChannel 是否已赋值
                     */
                    bool SourceChannelHasBeenSet() const;

                    /**
                     * 获取Configuration information
                     * @return Data Configuration information
                     */
                    std::vector<Pair> GetData() const;

                    /**
                     * 设置Configuration information
                     * @param Data Configuration information
                     */
                    void SetData(const std::vector<Pair>& _data);

                    /**
                     * 判断参数 Data 是否已赋值
                     * @return Data 是否已赋值
                     */
                    bool DataHasBeenSet() const;

                private:

                    /**
                     * Environment ID
                     */
                    std::string m_environmentId;
                    bool m_environmentIdHasBeenSet;

                    /**
                     * Configuration name
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Source channel. Please keep the default value.
                     */
                    int64_t m_sourceChannel;
                    bool m_sourceChannelHasBeenSet;

                    /**
                     * Configuration information
                     */
                    std::vector<Pair> m_data;
                    bool m_dataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEM_V20210701_MODEL_MODIFYCONFIGDATAREQUEST_H_
