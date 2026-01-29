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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_HIGHBASELINERISKITEM_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_HIGHBASELINERISKITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * High-Risk baseline risk content.
                */
                class HighBaseLineRiskItem : public AbstractModel
                {
                public:
                    HighBaseLineRiskItem();
                    ~HighBaseLineRiskItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Cloud account ID.
                     * @return CloudAccountID Cloud account ID.
                     * 
                     */
                    std::string GetCloudAccountID() const;

                    /**
                     * 设置Cloud account ID.
                     * @param _cloudAccountID Cloud account ID.
                     * 
                     */
                    void SetCloudAccountID(const std::string& _cloudAccountID);

                    /**
                     * 判断参数 CloudAccountID 是否已赋值
                     * @return CloudAccountID 是否已赋值
                     * 
                     */
                    bool CloudAccountIDHasBeenSet() const;

                    /**
                     * 获取Instance ID.
                     * @return AssetID Instance ID.
                     * 
                     */
                    std::string GetAssetID() const;

                    /**
                     * 设置Instance ID.
                     * @param _assetID Instance ID.
                     * 
                     */
                    void SetAssetID(const std::string& _assetID);

                    /**
                     * 判断参数 AssetID 是否已赋值
                     * @return AssetID 是否已赋值
                     * 
                     */
                    bool AssetIDHasBeenSet() const;

                    /**
                     * 获取Instance status
                     * @return InstanceStatus Instance status
                     * 
                     */
                    std::string GetInstanceStatus() const;

                    /**
                     * 设置Instance status
                     * @param _instanceStatus Instance status
                     * 
                     */
                    void SetInstanceStatus(const std::string& _instanceStatus);

                    /**
                     * 判断参数 InstanceStatus 是否已赋值
                     * @return InstanceStatus 是否已赋值
                     * 
                     */
                    bool InstanceStatusHasBeenSet() const;

                    /**
                     * 获取Instance name
                     * @return InstanceName Instance name
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置Instance name
                     * @param _instanceName Instance name
                     * 
                     */
                    void SetInstanceName(const std::string& _instanceName);

                    /**
                     * 判断参数 InstanceName 是否已赋值
                     * @return InstanceName 是否已赋值
                     * 
                     */
                    bool InstanceNameHasBeenSet() const;

                    /**
                     * 获取Risk name.
                     * @return RiskName Risk name.
                     * 
                     */
                    std::string GetRiskName() const;

                    /**
                     * 设置Risk name.
                     * @param _riskName Risk name.
                     * 
                     */
                    void SetRiskName(const std::string& _riskName);

                    /**
                     * 判断参数 RiskName 是否已赋值
                     * @return RiskName 是否已赋值
                     * 
                     */
                    bool RiskNameHasBeenSet() const;

                    /**
                     * 获取Risk classification.
                     * @return RiskCategory Risk classification.
                     * 
                     */
                    std::string GetRiskCategory() const;

                    /**
                     * 设置Risk classification.
                     * @param _riskCategory Risk classification.
                     * 
                     */
                    void SetRiskCategory(const std::string& _riskCategory);

                    /**
                     * 判断参数 RiskCategory 是否已赋值
                     * @return RiskCategory 是否已赋值
                     * 
                     */
                    bool RiskCategoryHasBeenSet() const;

                    /**
                     * 获取Risk level.
                     * @return RiskLevel Risk level.
                     * 
                     */
                    std::string GetRiskLevel() const;

                    /**
                     * 设置Risk level.
                     * @param _riskLevel Risk level.
                     * 
                     */
                    void SetRiskLevel(const std::string& _riskLevel);

                    /**
                     * 判断参数 RiskLevel 是否已赋值
                     * @return RiskLevel 是否已赋值
                     * 
                     */
                    bool RiskLevelHasBeenSet() const;

                    /**
                     * 获取Risk description.
                     * @return RiskDesc Risk description.
                     * 
                     */
                    std::string GetRiskDesc() const;

                    /**
                     * 设置Risk description.
                     * @param _riskDesc Risk description.
                     * 
                     */
                    void SetRiskDesc(const std::string& _riskDesc);

                    /**
                     * 判断参数 RiskDesc 是否已赋值
                     * @return RiskDesc 是否已赋值
                     * 
                     */
                    bool RiskDescHasBeenSet() const;

                    /**
                     * 获取Risk result.
                     * @return RiskResult Risk result.
                     * 
                     */
                    std::string GetRiskResult() const;

                    /**
                     * 设置Risk result.
                     * @param _riskResult Risk result.
                     * 
                     */
                    void SetRiskResult(const std::string& _riskResult);

                    /**
                     * 判断参数 RiskResult 是否已赋值
                     * @return RiskResult 是否已赋值
                     * 
                     */
                    bool RiskResultHasBeenSet() const;

                    /**
                     * 获取Fixing suggestion
                     * @return FixAdvice Fixing suggestion
                     * 
                     */
                    std::string GetFixAdvice() const;

                    /**
                     * 设置Fixing suggestion
                     * @param _fixAdvice Fixing suggestion
                     * 
                     */
                    void SetFixAdvice(const std::string& _fixAdvice);

                    /**
                     * 判断参数 FixAdvice 是否已赋值
                     * @return FixAdvice 是否已赋值
                     * 
                     */
                    bool FixAdviceHasBeenSet() const;

                    /**
                     * 获取Linux vulnerability.
                     * @return RiskCategoryName Linux vulnerability.
                     * 
                     */
                    std::string GetRiskCategoryName() const;

                    /**
                     * 设置Linux vulnerability.
                     * @param _riskCategoryName Linux vulnerability.
                     * 
                     */
                    void SetRiskCategoryName(const std::string& _riskCategoryName);

                    /**
                     * 判断参数 RiskCategoryName 是否已赋值
                     * @return RiskCategoryName 是否已赋值
                     * 
                     */
                    bool RiskCategoryNameHasBeenSet() const;

                    /**
                     * 获取Risk name.
                     * @return RiskLevelName Risk name.
                     * 
                     */
                    std::string GetRiskLevelName() const;

                    /**
                     * 设置Risk name.
                     * @param _riskLevelName Risk name.
                     * 
                     */
                    void SetRiskLevelName(const std::string& _riskLevelName);

                    /**
                     * 判断参数 RiskLevelName 是否已赋值
                     * @return RiskLevelName 是否已赋值
                     * 
                     */
                    bool RiskLevelNameHasBeenSet() const;

                    /**
                     * 获取Instance status
                     * @return InstanceStatusName Instance status
                     * 
                     */
                    std::string GetInstanceStatusName() const;

                    /**
                     * 设置Instance status
                     * @param _instanceStatusName Instance status
                     * 
                     */
                    void SetInstanceStatusName(const std::string& _instanceStatusName);

                    /**
                     * 判断参数 InstanceStatusName 是否已赋值
                     * @return InstanceStatusName 是否已赋值
                     * 
                     */
                    bool InstanceStatusNameHasBeenSet() const;

                    /**
                     * 获取First detection time
                     * @return CreateTime First detection time
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置First detection time
                     * @param _createTime First detection time
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取Last discovery time
                     * @return UpdateTime Last discovery time
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置Last discovery time
                     * @param _updateTime Last discovery time
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取Tenant ID.
                     * @return AppID Tenant ID.
                     * 
                     */
                    uint64_t GetAppID() const;

                    /**
                     * 设置Tenant ID.
                     * @param _appID Tenant ID.
                     * 
                     */
                    void SetAppID(const uint64_t& _appID);

                    /**
                     * 判断参数 AppID 是否已赋值
                     * @return AppID 是否已赋值
                     * 
                     */
                    bool AppIDHasBeenSet() const;

                private:

                    /**
                     * Cloud account ID.
                     */
                    std::string m_cloudAccountID;
                    bool m_cloudAccountIDHasBeenSet;

                    /**
                     * Instance ID.
                     */
                    std::string m_assetID;
                    bool m_assetIDHasBeenSet;

                    /**
                     * Instance status
                     */
                    std::string m_instanceStatus;
                    bool m_instanceStatusHasBeenSet;

                    /**
                     * Instance name
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * Risk name.
                     */
                    std::string m_riskName;
                    bool m_riskNameHasBeenSet;

                    /**
                     * Risk classification.
                     */
                    std::string m_riskCategory;
                    bool m_riskCategoryHasBeenSet;

                    /**
                     * Risk level.
                     */
                    std::string m_riskLevel;
                    bool m_riskLevelHasBeenSet;

                    /**
                     * Risk description.
                     */
                    std::string m_riskDesc;
                    bool m_riskDescHasBeenSet;

                    /**
                     * Risk result.
                     */
                    std::string m_riskResult;
                    bool m_riskResultHasBeenSet;

                    /**
                     * Fixing suggestion
                     */
                    std::string m_fixAdvice;
                    bool m_fixAdviceHasBeenSet;

                    /**
                     * Linux vulnerability.
                     */
                    std::string m_riskCategoryName;
                    bool m_riskCategoryNameHasBeenSet;

                    /**
                     * Risk name.
                     */
                    std::string m_riskLevelName;
                    bool m_riskLevelNameHasBeenSet;

                    /**
                     * Instance status
                     */
                    std::string m_instanceStatusName;
                    bool m_instanceStatusNameHasBeenSet;

                    /**
                     * First detection time
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Last discovery time
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * Tenant ID.
                     */
                    uint64_t m_appID;
                    bool m_appIDHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_HIGHBASELINERISKITEM_H_
