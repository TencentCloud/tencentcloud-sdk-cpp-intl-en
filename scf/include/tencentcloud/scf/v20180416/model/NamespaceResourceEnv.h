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

#ifndef TENCENTCLOUD_SCF_V20180416_MODEL_NAMESPACERESOURCEENV_H_
#define TENCENTCLOUD_SCF_V20180416_MODEL_NAMESPACERESOURCEENV_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/scf/v20180416/model/NamespaceResourceEnvTKE.h>


namespace TencentCloud
{
    namespace Scf
    {
        namespace V20180416
        {
            namespace Model
            {
                /**
                * Namespace resource pool configuration
                */
                class NamespaceResourceEnv : public AbstractModel
                {
                public:
                    NamespaceResourceEnv();
                    ~NamespaceResourceEnv() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Resource pool based on a TKE cluster
                     * @return TKE Resource pool based on a TKE cluster
                     * 
                     */
                    NamespaceResourceEnvTKE GetTKE() const;

                    /**
                     * 设置Resource pool based on a TKE cluster
                     * @param _tKE Resource pool based on a TKE cluster
                     * 
                     */
                    void SetTKE(const NamespaceResourceEnvTKE& _tKE);

                    /**
                     * 判断参数 TKE 是否已赋值
                     * @return TKE 是否已赋值
                     * 
                     */
                    bool TKEHasBeenSet() const;

                    /**
                     * 获取Namespace of the near-offline computing type
                     * @return OFFLINE Namespace of the near-offline computing type
                     * 
                     */
                    bool GetOFFLINE() const;

                    /**
                     * 设置Namespace of the near-offline computing type
                     * @param _oFFLINE Namespace of the near-offline computing type
                     * 
                     */
                    void SetOFFLINE(const bool& _oFFLINE);

                    /**
                     * 判断参数 OFFLINE 是否已赋值
                     * @return OFFLINE 是否已赋值
                     * 
                     */
                    bool OFFLINEHasBeenSet() const;

                private:

                    /**
                     * Resource pool based on a TKE cluster
                     */
                    NamespaceResourceEnvTKE m_tKE;
                    bool m_tKEHasBeenSet;

                    /**
                     * Namespace of the near-offline computing type
                     */
                    bool m_oFFLINE;
                    bool m_oFFLINEHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SCF_V20180416_MODEL_NAMESPACERESOURCEENV_H_
