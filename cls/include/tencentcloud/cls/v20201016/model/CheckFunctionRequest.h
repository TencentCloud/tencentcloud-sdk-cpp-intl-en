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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_CHECKFUNCTIONREQUEST_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_CHECKFUNCTIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cls/v20201016/model/DataTransformResouceInfo.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * CheckFunction request structure.
                */
                class CheckFunctionRequest : public AbstractModel
                {
                public:
                    CheckFunctionRequest();
                    ~CheckFunctionRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Processing statement entered by the user
                     * @return EtlContent Processing statement entered by the user
                     * 
                     */
                    std::string GetEtlContent() const;

                    /**
                     * 设置Processing statement entered by the user
                     * @param _etlContent Processing statement entered by the user
                     * 
                     */
                    void SetEtlContent(const std::string& _etlContent);

                    /**
                     * 判断参数 EtlContent 是否已赋值
                     * @return EtlContent 是否已赋值
                     * 
                     */
                    bool EtlContentHasBeenSet() const;

                    /**
                     * 获取Target topic ID and alias of the data processing task
                     * @return DstResources Target topic ID and alias of the data processing task
                     * 
                     */
                    std::vector<DataTransformResouceInfo> GetDstResources() const;

                    /**
                     * 设置Target topic ID and alias of the data processing task
                     * @param _dstResources Target topic ID and alias of the data processing task
                     * 
                     */
                    void SetDstResources(const std::vector<DataTransformResouceInfo>& _dstResources);

                    /**
                     * 判断参数 DstResources 是否已赋值
                     * @return DstResources 是否已赋值
                     * 
                     */
                    bool DstResourcesHasBeenSet() const;

                    /**
                     * 获取Type of the target topic for data processing. Valid values: 1 (fixed Topic) and 2 (dynamic creation)
                     * @return FuncType Type of the target topic for data processing. Valid values: 1 (fixed Topic) and 2 (dynamic creation)
                     * 
                     */
                    int64_t GetFuncType() const;

                    /**
                     * 设置Type of the target topic for data processing. Valid values: 1 (fixed Topic) and 2 (dynamic creation)
                     * @param _funcType Type of the target topic for data processing. Valid values: 1 (fixed Topic) and 2 (dynamic creation)
                     * 
                     */
                    void SetFuncType(const int64_t& _funcType);

                    /**
                     * 判断参数 FuncType 是否已赋值
                     * @return FuncType 是否已赋值
                     * 
                     */
                    bool FuncTypeHasBeenSet() const;

                private:

                    /**
                     * Processing statement entered by the user
                     */
                    std::string m_etlContent;
                    bool m_etlContentHasBeenSet;

                    /**
                     * Target topic ID and alias of the data processing task
                     */
                    std::vector<DataTransformResouceInfo> m_dstResources;
                    bool m_dstResourcesHasBeenSet;

                    /**
                     * Type of the target topic for data processing. Valid values: 1 (fixed Topic) and 2 (dynamic creation)
                     */
                    int64_t m_funcType;
                    bool m_funcTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_CHECKFUNCTIONREQUEST_H_
