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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_DESCRIBENODESPECREQUEST_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_DESCRIBENODESPECREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * DescribeNodeSpec request structure.
                */
                class DescribeNodeSpecRequest : public AbstractModel
                {
                public:
                    DescribeNodeSpecRequest();
                    ~DescribeNodeSpecRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Availability zone (AZ) ID. https://document.capi.woa.com/document/api/1605/76892 can be accessed for related information.
                     * @return ZoneId Availability zone (AZ) ID. https://document.capi.woa.com/document/api/1605/76892 can be accessed for related information.
                     * 
                     */
                    int64_t GetZoneId() const;

                    /**
                     * 设置Availability zone (AZ) ID. https://document.capi.woa.com/document/api/1605/76892 can be accessed for related information.
                     * @param _zoneId Availability zone (AZ) ID. https://document.capi.woa.com/document/api/1605/76892 can be accessed for related information.
                     * 
                     */
                    void SetZoneId(const int64_t& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     * 
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取0: pay-as-you-go; 1: yearly/monthly subscription; 99: a combination of pay-as-you-go and yearly/monthly subscription. Invalid values will suppress billing display.
                     * @return CvmPayMode 0: pay-as-you-go; 1: yearly/monthly subscription; 99: a combination of pay-as-you-go and yearly/monthly subscription. Invalid values will suppress billing display.
                     * 
                     */
                    uint64_t GetCvmPayMode() const;

                    /**
                     * 设置0: pay-as-you-go; 1: yearly/monthly subscription; 99: a combination of pay-as-you-go and yearly/monthly subscription. Invalid values will suppress billing display.
                     * @param _cvmPayMode 0: pay-as-you-go; 1: yearly/monthly subscription; 99: a combination of pay-as-you-go and yearly/monthly subscription. Invalid values will suppress billing display.
                     * 
                     */
                    void SetCvmPayMode(const uint64_t& _cvmPayMode);

                    /**
                     * 判断参数 CvmPayMode 是否已赋值
                     * @return CvmPayMode 是否已赋值
                     * 
                     */
                    bool CvmPayModeHasBeenSet() const;

                    /**
                     * 获取Node type: Master,Core,Task,Router,All.
                     * @return NodeType Node type: Master,Core,Task,Router,All.
                     * 
                     */
                    std::string GetNodeType() const;

                    /**
                     * 设置Node type: Master,Core,Task,Router,All.
                     * @param _nodeType Node type: Master,Core,Task,Router,All.
                     * 
                     */
                    void SetNodeType(const std::string& _nodeType);

                    /**
                     * 判断参数 NodeType 是否已赋值
                     * @return NodeType 是否已赋值
                     * 
                     */
                    bool NodeTypeHasBeenSet() const;

                    /**
                     * 获取0: old billing page; 1: new billing page. Invalid values will be deemed to be old billing by default.
                     * @return TradeType 0: old billing page; 1: new billing page. Invalid values will be deemed to be old billing by default.
                     * 
                     */
                    uint64_t GetTradeType() const;

                    /**
                     * 设置0: old billing page; 1: new billing page. Invalid values will be deemed to be old billing by default.
                     * @param _tradeType 0: old billing page; 1: new billing page. Invalid values will be deemed to be old billing by default.
                     * 
                     */
                    void SetTradeType(const uint64_t& _tradeType);

                    /**
                     * 判断参数 TradeType 是否已赋值
                     * @return TradeType 是否已赋值
                     * 
                     */
                    bool TradeTypeHasBeenSet() const;

                    /**
                     * 获取Product ID. If left blank, the value is "0". This field is used to represent the product ID in all situations. It is required in front-end scenarios.

44	EMR	V3.5.0
43	EMR	V3.4.0.tlinux
42	EMR	V2.7.0.tlinux
41	DRUID	V1.1.0
67	STARROCKS	V2.2.0
45	DRUID	V1.1.0.tlinux
40	EMRCLOUD	v3.2.0
47	EMR	V4.0.0
48	STARROCKS	V1.2.0
49	STARROCKS	V1.3.0
50	KAFKA	V2.0.0
51	STARROCKS	V1.4.0
52	EMR-TKE	V1.0.0
53	EMR	V3.6.0
54	STARROCKS	V2.0.0
55	EMR-TKE	V1.0.1
56	EMR-TKE	DLCV1.0.0
57	EMR	V2.8.0
58	EMR	V3.6.1
59	SERVERLESS	V1.0.0
60	EMR-TKE	V1.1.0
62	STARROCKS	V2.1.1
63	STARROCKS	V2.1.1.tlinux
64	EMR-TKE	TCCV1.0.0
65	EMR-TKE-AI	V1.0.0
66	RSS	V1.0.0
24	EMR	TianQiong-V1.0.0
3	EMR	V2.0.1.tlinux
4	EMR	V2.1.0
7	EMR	V3.0.0
8	EMR	V3.0.0.tlinux
9	EMR	V2.2.0
11	CLICKHOUSE	V1.0.0
12	CLICKHOUSE	V1.0.0.tlinux
16	EMR	V2.3.0
17	CLICKHOUSE	V1.1.0
18	CLICKHOUSE	V1.1.0.tlinux
19	EMR	V2.4.0
20	EMR	V2.5.0
21	USERCUSTOM	V1.0.0
22	CLICKHOUSE	V1.2.0
39	STARROCKS	V1.1.0
25	EMR	V3.1.0
26	DORIS	V1.0.0
27	KAFKA	V1.0.0
28	EMR	V3.2.0
29	EMR	V2.5.1
30	EMR	V2.6.0
32	DORIS	V1.1.0
33	EMR	V3.2.1
34	EMR	V3.3.0
35	DORIS	V1.2.0
36	STARROCKS	V1.0.0
37	EMR	V3.4.0
38	EMR	V2.7.0
                     * @return ProductId Product ID. If left blank, the value is "0". This field is used to represent the product ID in all situations. It is required in front-end scenarios.

44	EMR	V3.5.0
43	EMR	V3.4.0.tlinux
42	EMR	V2.7.0.tlinux
41	DRUID	V1.1.0
67	STARROCKS	V2.2.0
45	DRUID	V1.1.0.tlinux
40	EMRCLOUD	v3.2.0
47	EMR	V4.0.0
48	STARROCKS	V1.2.0
49	STARROCKS	V1.3.0
50	KAFKA	V2.0.0
51	STARROCKS	V1.4.0
52	EMR-TKE	V1.0.0
53	EMR	V3.6.0
54	STARROCKS	V2.0.0
55	EMR-TKE	V1.0.1
56	EMR-TKE	DLCV1.0.0
57	EMR	V2.8.0
58	EMR	V3.6.1
59	SERVERLESS	V1.0.0
60	EMR-TKE	V1.1.0
62	STARROCKS	V2.1.1
63	STARROCKS	V2.1.1.tlinux
64	EMR-TKE	TCCV1.0.0
65	EMR-TKE-AI	V1.0.0
66	RSS	V1.0.0
24	EMR	TianQiong-V1.0.0
3	EMR	V2.0.1.tlinux
4	EMR	V2.1.0
7	EMR	V3.0.0
8	EMR	V3.0.0.tlinux
9	EMR	V2.2.0
11	CLICKHOUSE	V1.0.0
12	CLICKHOUSE	V1.0.0.tlinux
16	EMR	V2.3.0
17	CLICKHOUSE	V1.1.0
18	CLICKHOUSE	V1.1.0.tlinux
19	EMR	V2.4.0
20	EMR	V2.5.0
21	USERCUSTOM	V1.0.0
22	CLICKHOUSE	V1.2.0
39	STARROCKS	V1.1.0
25	EMR	V3.1.0
26	DORIS	V1.0.0
27	KAFKA	V1.0.0
28	EMR	V3.2.0
29	EMR	V2.5.1
30	EMR	V2.6.0
32	DORIS	V1.1.0
33	EMR	V3.2.1
34	EMR	V3.3.0
35	DORIS	V1.2.0
36	STARROCKS	V1.0.0
37	EMR	V3.4.0
38	EMR	V2.7.0
                     * 
                     */
                    uint64_t GetProductId() const;

                    /**
                     * 设置Product ID. If left blank, the value is "0". This field is used to represent the product ID in all situations. It is required in front-end scenarios.

44	EMR	V3.5.0
43	EMR	V3.4.0.tlinux
42	EMR	V2.7.0.tlinux
41	DRUID	V1.1.0
67	STARROCKS	V2.2.0
45	DRUID	V1.1.0.tlinux
40	EMRCLOUD	v3.2.0
47	EMR	V4.0.0
48	STARROCKS	V1.2.0
49	STARROCKS	V1.3.0
50	KAFKA	V2.0.0
51	STARROCKS	V1.4.0
52	EMR-TKE	V1.0.0
53	EMR	V3.6.0
54	STARROCKS	V2.0.0
55	EMR-TKE	V1.0.1
56	EMR-TKE	DLCV1.0.0
57	EMR	V2.8.0
58	EMR	V3.6.1
59	SERVERLESS	V1.0.0
60	EMR-TKE	V1.1.0
62	STARROCKS	V2.1.1
63	STARROCKS	V2.1.1.tlinux
64	EMR-TKE	TCCV1.0.0
65	EMR-TKE-AI	V1.0.0
66	RSS	V1.0.0
24	EMR	TianQiong-V1.0.0
3	EMR	V2.0.1.tlinux
4	EMR	V2.1.0
7	EMR	V3.0.0
8	EMR	V3.0.0.tlinux
9	EMR	V2.2.0
11	CLICKHOUSE	V1.0.0
12	CLICKHOUSE	V1.0.0.tlinux
16	EMR	V2.3.0
17	CLICKHOUSE	V1.1.0
18	CLICKHOUSE	V1.1.0.tlinux
19	EMR	V2.4.0
20	EMR	V2.5.0
21	USERCUSTOM	V1.0.0
22	CLICKHOUSE	V1.2.0
39	STARROCKS	V1.1.0
25	EMR	V3.1.0
26	DORIS	V1.0.0
27	KAFKA	V1.0.0
28	EMR	V3.2.0
29	EMR	V2.5.1
30	EMR	V2.6.0
32	DORIS	V1.1.0
33	EMR	V3.2.1
34	EMR	V3.3.0
35	DORIS	V1.2.0
36	STARROCKS	V1.0.0
37	EMR	V3.4.0
38	EMR	V2.7.0
                     * @param _productId Product ID. If left blank, the value is "0". This field is used to represent the product ID in all situations. It is required in front-end scenarios.

44	EMR	V3.5.0
43	EMR	V3.4.0.tlinux
42	EMR	V2.7.0.tlinux
41	DRUID	V1.1.0
67	STARROCKS	V2.2.0
45	DRUID	V1.1.0.tlinux
40	EMRCLOUD	v3.2.0
47	EMR	V4.0.0
48	STARROCKS	V1.2.0
49	STARROCKS	V1.3.0
50	KAFKA	V2.0.0
51	STARROCKS	V1.4.0
52	EMR-TKE	V1.0.0
53	EMR	V3.6.0
54	STARROCKS	V2.0.0
55	EMR-TKE	V1.0.1
56	EMR-TKE	DLCV1.0.0
57	EMR	V2.8.0
58	EMR	V3.6.1
59	SERVERLESS	V1.0.0
60	EMR-TKE	V1.1.0
62	STARROCKS	V2.1.1
63	STARROCKS	V2.1.1.tlinux
64	EMR-TKE	TCCV1.0.0
65	EMR-TKE-AI	V1.0.0
66	RSS	V1.0.0
24	EMR	TianQiong-V1.0.0
3	EMR	V2.0.1.tlinux
4	EMR	V2.1.0
7	EMR	V3.0.0
8	EMR	V3.0.0.tlinux
9	EMR	V2.2.0
11	CLICKHOUSE	V1.0.0
12	CLICKHOUSE	V1.0.0.tlinux
16	EMR	V2.3.0
17	CLICKHOUSE	V1.1.0
18	CLICKHOUSE	V1.1.0.tlinux
19	EMR	V2.4.0
20	EMR	V2.5.0
21	USERCUSTOM	V1.0.0
22	CLICKHOUSE	V1.2.0
39	STARROCKS	V1.1.0
25	EMR	V3.1.0
26	DORIS	V1.0.0
27	KAFKA	V1.0.0
28	EMR	V3.2.0
29	EMR	V2.5.1
30	EMR	V2.6.0
32	DORIS	V1.1.0
33	EMR	V3.2.1
34	EMR	V3.3.0
35	DORIS	V1.2.0
36	STARROCKS	V1.0.0
37	EMR	V3.4.0
38	EMR	V2.7.0
                     * 
                     */
                    void SetProductId(const uint64_t& _productId);

                    /**
                     * 判断参数 ProductId 是否已赋值
                     * @return ProductId 是否已赋值
                     * 
                     */
                    bool ProductIdHasBeenSet() const;

                    /**
                     * 获取Scenario name.
                     * @return SceneName Scenario name.
                     * 
                     */
                    std::string GetSceneName() const;

                    /**
                     * 设置Scenario name.
                     * @param _sceneName Scenario name.
                     * 
                     */
                    void SetSceneName(const std::string& _sceneName);

                    /**
                     * 判断参数 SceneName 是否已赋值
                     * @return SceneName 是否已赋值
                     * 
                     */
                    bool SceneNameHasBeenSet() const;

                    /**
                     * 获取The type can be ComputeResource, EMR, or a default value. The default value is EMR.
                     * @return ResourceBaseType The type can be ComputeResource, EMR, or a default value. The default value is EMR.
                     * 
                     */
                    std::string GetResourceBaseType() const;

                    /**
                     * 设置The type can be ComputeResource, EMR, or a default value. The default value is EMR.
                     * @param _resourceBaseType The type can be ComputeResource, EMR, or a default value. The default value is EMR.
                     * 
                     */
                    void SetResourceBaseType(const std::string& _resourceBaseType);

                    /**
                     * 判断参数 ResourceBaseType 是否已赋值
                     * @return ResourceBaseType 是否已赋值
                     * 
                     */
                    bool ResourceBaseTypeHasBeenSet() const;

                    /**
                     * 获取Computing resource ID.
                     * @return ComputeResourceId Computing resource ID.
                     * 
                     */
                    std::string GetComputeResourceId() const;

                    /**
                     * 设置Computing resource ID.
                     * @param _computeResourceId Computing resource ID.
                     * 
                     */
                    void SetComputeResourceId(const std::string& _computeResourceId);

                    /**
                     * 判断参数 ComputeResourceId 是否已赋值
                     * @return ComputeResourceId 是否已赋值
                     * 
                     */
                    bool ComputeResourceIdHasBeenSet() const;

                private:

                    /**
                     * Availability zone (AZ) ID. https://document.capi.woa.com/document/api/1605/76892 can be accessed for related information.
                     */
                    int64_t m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * 0: pay-as-you-go; 1: yearly/monthly subscription; 99: a combination of pay-as-you-go and yearly/monthly subscription. Invalid values will suppress billing display.
                     */
                    uint64_t m_cvmPayMode;
                    bool m_cvmPayModeHasBeenSet;

                    /**
                     * Node type: Master,Core,Task,Router,All.
                     */
                    std::string m_nodeType;
                    bool m_nodeTypeHasBeenSet;

                    /**
                     * 0: old billing page; 1: new billing page. Invalid values will be deemed to be old billing by default.
                     */
                    uint64_t m_tradeType;
                    bool m_tradeTypeHasBeenSet;

                    /**
                     * Product ID. If left blank, the value is "0". This field is used to represent the product ID in all situations. It is required in front-end scenarios.

44	EMR	V3.5.0
43	EMR	V3.4.0.tlinux
42	EMR	V2.7.0.tlinux
41	DRUID	V1.1.0
67	STARROCKS	V2.2.0
45	DRUID	V1.1.0.tlinux
40	EMRCLOUD	v3.2.0
47	EMR	V4.0.0
48	STARROCKS	V1.2.0
49	STARROCKS	V1.3.0
50	KAFKA	V2.0.0
51	STARROCKS	V1.4.0
52	EMR-TKE	V1.0.0
53	EMR	V3.6.0
54	STARROCKS	V2.0.0
55	EMR-TKE	V1.0.1
56	EMR-TKE	DLCV1.0.0
57	EMR	V2.8.0
58	EMR	V3.6.1
59	SERVERLESS	V1.0.0
60	EMR-TKE	V1.1.0
62	STARROCKS	V2.1.1
63	STARROCKS	V2.1.1.tlinux
64	EMR-TKE	TCCV1.0.0
65	EMR-TKE-AI	V1.0.0
66	RSS	V1.0.0
24	EMR	TianQiong-V1.0.0
3	EMR	V2.0.1.tlinux
4	EMR	V2.1.0
7	EMR	V3.0.0
8	EMR	V3.0.0.tlinux
9	EMR	V2.2.0
11	CLICKHOUSE	V1.0.0
12	CLICKHOUSE	V1.0.0.tlinux
16	EMR	V2.3.0
17	CLICKHOUSE	V1.1.0
18	CLICKHOUSE	V1.1.0.tlinux
19	EMR	V2.4.0
20	EMR	V2.5.0
21	USERCUSTOM	V1.0.0
22	CLICKHOUSE	V1.2.0
39	STARROCKS	V1.1.0
25	EMR	V3.1.0
26	DORIS	V1.0.0
27	KAFKA	V1.0.0
28	EMR	V3.2.0
29	EMR	V2.5.1
30	EMR	V2.6.0
32	DORIS	V1.1.0
33	EMR	V3.2.1
34	EMR	V3.3.0
35	DORIS	V1.2.0
36	STARROCKS	V1.0.0
37	EMR	V3.4.0
38	EMR	V2.7.0
                     */
                    uint64_t m_productId;
                    bool m_productIdHasBeenSet;

                    /**
                     * Scenario name.
                     */
                    std::string m_sceneName;
                    bool m_sceneNameHasBeenSet;

                    /**
                     * The type can be ComputeResource, EMR, or a default value. The default value is EMR.
                     */
                    std::string m_resourceBaseType;
                    bool m_resourceBaseTypeHasBeenSet;

                    /**
                     * Computing resource ID.
                     */
                    std::string m_computeResourceId;
                    bool m_computeResourceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_DESCRIBENODESPECREQUEST_H_
