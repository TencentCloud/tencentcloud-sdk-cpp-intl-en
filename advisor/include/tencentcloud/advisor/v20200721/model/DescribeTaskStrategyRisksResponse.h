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

#ifndef TENCENTCLOUD_ADVISOR_V20200721_MODEL_DESCRIBETASKSTRATEGYRISKSRESPONSE_H_
#define TENCENTCLOUD_ADVISOR_V20200721_MODEL_DESCRIBETASKSTRATEGYRISKSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/advisor/v20200721/model/RiskFieldsDesc.h>


namespace TencentCloud
{
    namespace Advisor
    {
        namespace V20200721
        {
            namespace Model
            {
                /**
                * DescribeTaskStrategyRisks response structure.
                */
                class DescribeTaskStrategyRisksResponse : public AbstractModel
                {
                public:
                    DescribeTaskStrategyRisksResponse();
                    ~DescribeTaskStrategyRisksResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取According to this configuration, match the corresponding fields of the risky instance list (Risks), for example:
{"Response":{"RequestId":"111","RiskFieldsDesc":[{"Field":"InstanceId","FieldName":"ID","FieldType":"string","FieldDict":{} },{"Field":"InstanceName","FieldName":"Name","FieldType":"string","FieldDict":{}},{"Field":"InstanceState","FieldName":"Status ","FieldType":"string","FieldDict":{"LAUNCH_FAILED":"Creation failed","PENDING":"Creating","REBOOTING":"Re- starting","RUNNING":"Running","SHUTDOWN":"Stop waiting to be terminated","STARTING":"Starting","STOPPED":"Shut down","STOPPING":"Shutting down"," TERMINATING":"Terminating"}},{"Field":"Zone","FieldName":"Available zone","FieldType":"string","FieldDict":{}},{"Field":" PrivateIPAddresses","FieldName":"Private IP addresses","FieldType":"stringSlice","FieldDict":{}},{"Field":"PublicIPAddresses","FieldName":"Public IP addresses","Field Type":"stringSlice","FieldDict":{}},{"Field":"Region","FieldName":"Region","FieldType":"string","FieldDict":{}},{" Field":"Tags","FieldName":"Tags","FieldType":"tags","FieldDict":{}}],"RiskTotalCount":3,"Risks":"[{\"InstanceId\" :\"ins-xxx1\",\"InstanceName\":\"xxx1\",\"InstanceState\":\"RUNNING\",\"PrivateIPAddresses\":[\"1.17.64.2\"],\ " PublicIPAddresses\":null,\"Region\":\"ap-shanghai\",\"Tags\":null,\"Zone\":\"ap-shanghai-2\"},{\"InstanceId\ ":\"ins-xxx2\",\"InstanceName\":\"xxx2\",\"InstanceState\":\"RUNNING\",\"PrivateIPAddresses\":[\"1.17.64.11\"], \"PublicIPAddresses\":null,\"Region\":\"ap-shanghai\",\"Tags\":null,\"Zone\":\"ap-shanghai-2\"}]"," StrategyId":9}}
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return RiskFieldsDesc According to this configuration, match the corresponding fields of the risky instance list (Risks), for example:
{"Response":{"RequestId":"111","RiskFieldsDesc":[{"Field":"InstanceId","FieldName":"ID","FieldType":"string","FieldDict":{} },{"Field":"InstanceName","FieldName":"Name","FieldType":"string","FieldDict":{}},{"Field":"InstanceState","FieldName":"Status ","FieldType":"string","FieldDict":{"LAUNCH_FAILED":"Creation failed","PENDING":"Creating","REBOOTING":"Re- starting","RUNNING":"Running","SHUTDOWN":"Stop waiting to be terminated","STARTING":"Starting","STOPPED":"Shut down","STOPPING":"Shutting down"," TERMINATING":"Terminating"}},{"Field":"Zone","FieldName":"Available zone","FieldType":"string","FieldDict":{}},{"Field":" PrivateIPAddresses","FieldName":"Private IP addresses","FieldType":"stringSlice","FieldDict":{}},{"Field":"PublicIPAddresses","FieldName":"Public IP addresses","Field Type":"stringSlice","FieldDict":{}},{"Field":"Region","FieldName":"Region","FieldType":"string","FieldDict":{}},{" Field":"Tags","FieldName":"Tags","FieldType":"tags","FieldDict":{}}],"RiskTotalCount":3,"Risks":"[{\"InstanceId\" :\"ins-xxx1\",\"InstanceName\":\"xxx1\",\"InstanceState\":\"RUNNING\",\"PrivateIPAddresses\":[\"1.17.64.2\"],\ " PublicIPAddresses\":null,\"Region\":\"ap-shanghai\",\"Tags\":null,\"Zone\":\"ap-shanghai-2\"},{\"InstanceId\ ":\"ins-xxx2\",\"InstanceName\":\"xxx2\",\"InstanceState\":\"RUNNING\",\"PrivateIPAddresses\":[\"1.17.64.11\"], \"PublicIPAddresses\":null,\"Region\":\"ap-shanghai\",\"Tags\":null,\"Zone\":\"ap-shanghai-2\"}]"," StrategyId":9}}
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<RiskFieldsDesc> GetRiskFieldsDesc() const;

                    /**
                     * 判断参数 RiskFieldsDesc 是否已赋值
                     * @return RiskFieldsDesc 是否已赋值
                     * 
                     */
                    bool RiskFieldsDescHasBeenSet() const;

                    /**
                     * 获取Assessment item ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return StrategyId Assessment item ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetStrategyId() const;

                    /**
                     * 判断参数 StrategyId 是否已赋值
                     * @return StrategyId 是否已赋值
                     * 
                     */
                    bool StrategyIdHasBeenSet() const;

                    /**
                     * 获取Number of risky instances
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return RiskTotalCount Number of risky instances
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetRiskTotalCount() const;

                    /**
                     * 判断参数 RiskTotalCount 是否已赋值
                     * @return RiskTotalCount 是否已赋值
                     * 
                     */
                    bool RiskTotalCountHasBeenSet() const;

                    /**
                     * 获取Risky instance details list. Require json decode.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Risks Risky instance details list. Require json decode.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetRisks() const;

                    /**
                     * 判断参数 Risks 是否已赋值
                     * @return Risks 是否已赋值
                     * 
                     */
                    bool RisksHasBeenSet() const;

                    /**
                     * 获取Number of inspection resources
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ResourceCount Number of inspection resources
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetResourceCount() const;

                    /**
                     * 判断参数 ResourceCount 是否已赋值
                     * @return ResourceCount 是否已赋值
                     * 
                     */
                    bool ResourceCountHasBeenSet() const;

                private:

                    /**
                     * According to this configuration, match the corresponding fields of the risky instance list (Risks), for example:
{"Response":{"RequestId":"111","RiskFieldsDesc":[{"Field":"InstanceId","FieldName":"ID","FieldType":"string","FieldDict":{} },{"Field":"InstanceName","FieldName":"Name","FieldType":"string","FieldDict":{}},{"Field":"InstanceState","FieldName":"Status ","FieldType":"string","FieldDict":{"LAUNCH_FAILED":"Creation failed","PENDING":"Creating","REBOOTING":"Re- starting","RUNNING":"Running","SHUTDOWN":"Stop waiting to be terminated","STARTING":"Starting","STOPPED":"Shut down","STOPPING":"Shutting down"," TERMINATING":"Terminating"}},{"Field":"Zone","FieldName":"Available zone","FieldType":"string","FieldDict":{}},{"Field":" PrivateIPAddresses","FieldName":"Private IP addresses","FieldType":"stringSlice","FieldDict":{}},{"Field":"PublicIPAddresses","FieldName":"Public IP addresses","Field Type":"stringSlice","FieldDict":{}},{"Field":"Region","FieldName":"Region","FieldType":"string","FieldDict":{}},{" Field":"Tags","FieldName":"Tags","FieldType":"tags","FieldDict":{}}],"RiskTotalCount":3,"Risks":"[{\"InstanceId\" :\"ins-xxx1\",\"InstanceName\":\"xxx1\",\"InstanceState\":\"RUNNING\",\"PrivateIPAddresses\":[\"1.17.64.2\"],\ " PublicIPAddresses\":null,\"Region\":\"ap-shanghai\",\"Tags\":null,\"Zone\":\"ap-shanghai-2\"},{\"InstanceId\ ":\"ins-xxx2\",\"InstanceName\":\"xxx2\",\"InstanceState\":\"RUNNING\",\"PrivateIPAddresses\":[\"1.17.64.11\"], \"PublicIPAddresses\":null,\"Region\":\"ap-shanghai\",\"Tags\":null,\"Zone\":\"ap-shanghai-2\"}]"," StrategyId":9}}
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<RiskFieldsDesc> m_riskFieldsDesc;
                    bool m_riskFieldsDescHasBeenSet;

                    /**
                     * Assessment item ID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_strategyId;
                    bool m_strategyIdHasBeenSet;

                    /**
                     * Number of risky instances
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_riskTotalCount;
                    bool m_riskTotalCountHasBeenSet;

                    /**
                     * Risky instance details list. Require json decode.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_risks;
                    bool m_risksHasBeenSet;

                    /**
                     * Number of inspection resources
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_resourceCount;
                    bool m_resourceCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADVISOR_V20200721_MODEL_DESCRIBETASKSTRATEGYRISKSRESPONSE_H_
