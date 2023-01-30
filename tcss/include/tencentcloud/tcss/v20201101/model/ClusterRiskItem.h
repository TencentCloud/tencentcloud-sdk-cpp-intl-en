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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_CLUSTERRISKITEM_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_CLUSTERRISKITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcss/v20201101/model/ClusterCheckItem.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * A risk item is a check item with an issue found in the check, with certain information of the check result.
                */
                class ClusterRiskItem : public AbstractModel
                {
                public:
                    ClusterRiskItem();
                    ~ClusterRiskItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Check item information
                     * @return CheckItem Check item information
                     */
                    ClusterCheckItem GetCheckItem() const;

                    /**
                     * 设置Check item information
                     * @param CheckItem Check item information
                     */
                    void SetCheckItem(const ClusterCheckItem& _checkItem);

                    /**
                     * 判断参数 CheckItem 是否已赋值
                     * @return CheckItem 是否已赋值
                     */
                    bool CheckItemHasBeenSet() const;

                    /**
                     * 获取Verification information
                     * @return VerifyInfo Verification information
                     */
                    std::string GetVerifyInfo() const;

                    /**
                     * 设置Verification information
                     * @param VerifyInfo Verification information
                     */
                    void SetVerifyInfo(const std::string& _verifyInfo);

                    /**
                     * 判断参数 VerifyInfo 是否已赋值
                     * @return VerifyInfo 是否已赋值
                     */
                    bool VerifyInfoHasBeenSet() const;

                    /**
                     * 获取Event description and check error message
                     * @return ErrorMessage Event description and check error message
                     */
                    std::string GetErrorMessage() const;

                    /**
                     * 设置Event description and check error message
                     * @param ErrorMessage Event description and check error message
                     */
                    void SetErrorMessage(const std::string& _errorMessage);

                    /**
                     * 判断参数 ErrorMessage 是否已赋值
                     * @return ErrorMessage 是否已赋值
                     */
                    bool ErrorMessageHasBeenSet() const;

                    /**
                     * 获取Number of affected clusters
                     * @return AffectedClusterCount Number of affected clusters
                     */
                    uint64_t GetAffectedClusterCount() const;

                    /**
                     * 设置Number of affected clusters
                     * @param AffectedClusterCount Number of affected clusters
                     */
                    void SetAffectedClusterCount(const uint64_t& _affectedClusterCount);

                    /**
                     * 判断参数 AffectedClusterCount 是否已赋值
                     * @return AffectedClusterCount 是否已赋值
                     */
                    bool AffectedClusterCountHasBeenSet() const;

                    /**
                     * 获取Number of affected nodes
                     * @return AffectedNodeCount Number of affected nodes
                     */
                    uint64_t GetAffectedNodeCount() const;

                    /**
                     * 设置Number of affected nodes
                     * @param AffectedNodeCount Number of affected nodes
                     */
                    void SetAffectedNodeCount(const uint64_t& _affectedNodeCount);

                    /**
                     * 判断参数 AffectedNodeCount 是否已赋值
                     * @return AffectedNodeCount 是否已赋值
                     */
                    bool AffectedNodeCountHasBeenSet() const;

                private:

                    /**
                     * Check item information
                     */
                    ClusterCheckItem m_checkItem;
                    bool m_checkItemHasBeenSet;

                    /**
                     * Verification information
                     */
                    std::string m_verifyInfo;
                    bool m_verifyInfoHasBeenSet;

                    /**
                     * Event description and check error message
                     */
                    std::string m_errorMessage;
                    bool m_errorMessageHasBeenSet;

                    /**
                     * Number of affected clusters
                     */
                    uint64_t m_affectedClusterCount;
                    bool m_affectedClusterCountHasBeenSet;

                    /**
                     * Number of affected nodes
                     */
                    uint64_t m_affectedNodeCount;
                    bool m_affectedNodeCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_CLUSTERRISKITEM_H_
