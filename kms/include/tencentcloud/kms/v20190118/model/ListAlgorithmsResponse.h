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

#ifndef TENCENTCLOUD_KMS_V20190118_MODEL_LISTALGORITHMSRESPONSE_H_
#define TENCENTCLOUD_KMS_V20190118_MODEL_LISTALGORITHMSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/kms/v20190118/model/AlgorithmInfo.h>


namespace TencentCloud
{
    namespace Kms
    {
        namespace V20190118
        {
            namespace Model
            {
                /**
                * ListAlgorithms response structure.
                */
                class ListAlgorithmsResponse : public AbstractModel
                {
                public:
                    ListAlgorithmsResponse();
                    ~ListAlgorithmsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Symmetric encryption algorithms supported in this region
                     * @return SymmetricAlgorithms Symmetric encryption algorithms supported in this region
                     * 
                     */
                    std::vector<AlgorithmInfo> GetSymmetricAlgorithms() const;

                    /**
                     * 判断参数 SymmetricAlgorithms 是否已赋值
                     * @return SymmetricAlgorithms 是否已赋值
                     * 
                     */
                    bool SymmetricAlgorithmsHasBeenSet() const;

                    /**
                     * 获取Asymmetric encryption algorithms supported in this region
                     * @return AsymmetricAlgorithms Asymmetric encryption algorithms supported in this region
                     * 
                     */
                    std::vector<AlgorithmInfo> GetAsymmetricAlgorithms() const;

                    /**
                     * 判断参数 AsymmetricAlgorithms 是否已赋值
                     * @return AsymmetricAlgorithms 是否已赋值
                     * 
                     */
                    bool AsymmetricAlgorithmsHasBeenSet() const;

                    /**
                     * 获取Asymmetric signature verification algorithms supported in the current region
                     * @return AsymmetricSignVerifyAlgorithms Asymmetric signature verification algorithms supported in the current region
                     * 
                     */
                    std::vector<AlgorithmInfo> GetAsymmetricSignVerifyAlgorithms() const;

                    /**
                     * 判断参数 AsymmetricSignVerifyAlgorithms 是否已赋值
                     * @return AsymmetricSignVerifyAlgorithms 是否已赋值
                     * 
                     */
                    bool AsymmetricSignVerifyAlgorithmsHasBeenSet() const;

                private:

                    /**
                     * Symmetric encryption algorithms supported in this region
                     */
                    std::vector<AlgorithmInfo> m_symmetricAlgorithms;
                    bool m_symmetricAlgorithmsHasBeenSet;

                    /**
                     * Asymmetric encryption algorithms supported in this region
                     */
                    std::vector<AlgorithmInfo> m_asymmetricAlgorithms;
                    bool m_asymmetricAlgorithmsHasBeenSet;

                    /**
                     * Asymmetric signature verification algorithms supported in the current region
                     */
                    std::vector<AlgorithmInfo> m_asymmetricSignVerifyAlgorithms;
                    bool m_asymmetricSignVerifyAlgorithmsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_KMS_V20190118_MODEL_LISTALGORITHMSRESPONSE_H_
