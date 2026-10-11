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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_CREATEINSTANCEREQUEST_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_CREATEINSTANCEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/emr/v20190103/model/LoginSettings.h>
#include <tencentcloud/emr/v20190103/model/VPCSettings.h>
#include <tencentcloud/emr/v20190103/model/NewResourceSpec.h>
#include <tencentcloud/emr/v20190103/model/COSSettings.h>
#include <tencentcloud/emr/v20190103/model/Placement.h>
#include <tencentcloud/emr/v20190103/model/PreExecuteFileSettings.h>
#include <tencentcloud/emr/v20190103/model/Tag.h>
#include <tencentcloud/emr/v20190103/model/CustomMetaInfo.h>
#include <tencentcloud/emr/v20190103/model/ExternalService.h>
#include <tencentcloud/emr/v20190103/model/MultiZoneSetting.h>
#include <tencentcloud/emr/v20190103/model/NodeMark.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * CreateInstance request structure.
                */
                class CreateInstanceRequest : public AbstractModel
                {
                public:
                    CreateInstanceRequest();
                    ~CreateInstanceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Product ID. Different product IDs indicate different EMR product versions. Valid values:<br>51: STARROCKS-V1.4.0<br>54: STARROCKS-V2.0.0<br>27: KAFKA-V1.0.0<br>50: KAFKA-V2.0.0<br>16: EMR-V2.3.0<br>20: EMR-V2.5.0<br>30: EMR-V2.6.0<br>38: EMR-V2.7.0<br>25: EMR-V3.1.0<br>33: EMR-V3.2.1<br>34: EMR-V3.3.0<br>37: EMR-V3.4.0<br>44: EMR-V3.5.0<br>53: EMR-V3.6.0<br>58: EMR-3.6.1<br>59: EMR-serverless-1.0.0<br>60: EMR-TKE-1.1.0<br>61: SR-V2.1.0<br>62: SR-V2.1.0-SharedData<br>63: SR-V2.1.0.tlinux<br>64: unified metadata management project<br>65: EMR-TKE-AI-1.0.0<br>66: RSS-1.0.0<br>67: SR-V2.2.0<br>68: SR-V2.2.0.tlinux<br>69: EMR-AI-1.1.0<br>70: SR-V2.2.1<br>71: EMR-3.7.0<br>72: EMR-serverless-1.0.1<br>73: KAFKA-2.0.1<br>74: SR-V2.2.2<br>75: EMR-TKE-AI-1.1.0<br>76: EMR-V3.7.1<br>77: SERVERLESS-TCBASE-1.0.0<br>78: EMR-V3.6.2<br>79: STARROCKS-V2.2.2<br>80: EMR-AI-V1.1.1</p>
                     * @return ProductId <p>Product ID. Different product IDs indicate different EMR product versions. Valid values:<br>51: STARROCKS-V1.4.0<br>54: STARROCKS-V2.0.0<br>27: KAFKA-V1.0.0<br>50: KAFKA-V2.0.0<br>16: EMR-V2.3.0<br>20: EMR-V2.5.0<br>30: EMR-V2.6.0<br>38: EMR-V2.7.0<br>25: EMR-V3.1.0<br>33: EMR-V3.2.1<br>34: EMR-V3.3.0<br>37: EMR-V3.4.0<br>44: EMR-V3.5.0<br>53: EMR-V3.6.0<br>58: EMR-3.6.1<br>59: EMR-serverless-1.0.0<br>60: EMR-TKE-1.1.0<br>61: SR-V2.1.0<br>62: SR-V2.1.0-SharedData<br>63: SR-V2.1.0.tlinux<br>64: unified metadata management project<br>65: EMR-TKE-AI-1.0.0<br>66: RSS-1.0.0<br>67: SR-V2.2.0<br>68: SR-V2.2.0.tlinux<br>69: EMR-AI-1.1.0<br>70: SR-V2.2.1<br>71: EMR-3.7.0<br>72: EMR-serverless-1.0.1<br>73: KAFKA-2.0.1<br>74: SR-V2.2.2<br>75: EMR-TKE-AI-1.1.0<br>76: EMR-V3.7.1<br>77: SERVERLESS-TCBASE-1.0.0<br>78: EMR-V3.6.2<br>79: STARROCKS-V2.2.2<br>80: EMR-AI-V1.1.1</p>
                     * 
                     */
                    uint64_t GetProductId() const;

                    /**
                     * 设置<p>Product ID. Different product IDs indicate different EMR product versions. Valid values:<br>51: STARROCKS-V1.4.0<br>54: STARROCKS-V2.0.0<br>27: KAFKA-V1.0.0<br>50: KAFKA-V2.0.0<br>16: EMR-V2.3.0<br>20: EMR-V2.5.0<br>30: EMR-V2.6.0<br>38: EMR-V2.7.0<br>25: EMR-V3.1.0<br>33: EMR-V3.2.1<br>34: EMR-V3.3.0<br>37: EMR-V3.4.0<br>44: EMR-V3.5.0<br>53: EMR-V3.6.0<br>58: EMR-3.6.1<br>59: EMR-serverless-1.0.0<br>60: EMR-TKE-1.1.0<br>61: SR-V2.1.0<br>62: SR-V2.1.0-SharedData<br>63: SR-V2.1.0.tlinux<br>64: unified metadata management project<br>65: EMR-TKE-AI-1.0.0<br>66: RSS-1.0.0<br>67: SR-V2.2.0<br>68: SR-V2.2.0.tlinux<br>69: EMR-AI-1.1.0<br>70: SR-V2.2.1<br>71: EMR-3.7.0<br>72: EMR-serverless-1.0.1<br>73: KAFKA-2.0.1<br>74: SR-V2.2.2<br>75: EMR-TKE-AI-1.1.0<br>76: EMR-V3.7.1<br>77: SERVERLESS-TCBASE-1.0.0<br>78: EMR-V3.6.2<br>79: STARROCKS-V2.2.2<br>80: EMR-AI-V1.1.1</p>
                     * @param _productId <p>Product ID. Different product IDs indicate different EMR product versions. Valid values:<br>51: STARROCKS-V1.4.0<br>54: STARROCKS-V2.0.0<br>27: KAFKA-V1.0.0<br>50: KAFKA-V2.0.0<br>16: EMR-V2.3.0<br>20: EMR-V2.5.0<br>30: EMR-V2.6.0<br>38: EMR-V2.7.0<br>25: EMR-V3.1.0<br>33: EMR-V3.2.1<br>34: EMR-V3.3.0<br>37: EMR-V3.4.0<br>44: EMR-V3.5.0<br>53: EMR-V3.6.0<br>58: EMR-3.6.1<br>59: EMR-serverless-1.0.0<br>60: EMR-TKE-1.1.0<br>61: SR-V2.1.0<br>62: SR-V2.1.0-SharedData<br>63: SR-V2.1.0.tlinux<br>64: unified metadata management project<br>65: EMR-TKE-AI-1.0.0<br>66: RSS-1.0.0<br>67: SR-V2.2.0<br>68: SR-V2.2.0.tlinux<br>69: EMR-AI-1.1.0<br>70: SR-V2.2.1<br>71: EMR-3.7.0<br>72: EMR-serverless-1.0.1<br>73: KAFKA-2.0.1<br>74: SR-V2.2.2<br>75: EMR-TKE-AI-1.1.0<br>76: EMR-V3.7.1<br>77: SERVERLESS-TCBASE-1.0.0<br>78: EMR-V3.6.2<br>79: STARROCKS-V2.2.2<br>80: EMR-AI-V1.1.1</p>
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
                     * 获取<p>List of deployed components. Different EMR product IDs correspond to different optional component lists (ProductId: For details about its meaning, see the ProductId request parameter). For details about how to query optional component lists for different product versions, see <a href="https://www.tencentcloud.com/document/product/589/20279?from_cn_redirect=1">Component Version</a>.<br>Example values: hive and flink.</p>
                     * @return Software <p>List of deployed components. Different EMR product IDs correspond to different optional component lists (ProductId: For details about its meaning, see the ProductId request parameter). For details about how to query optional component lists for different product versions, see <a href="https://www.tencentcloud.com/document/product/589/20279?from_cn_redirect=1">Component Version</a>.<br>Example values: hive and flink.</p>
                     * 
                     */
                    std::vector<std::string> GetSoftware() const;

                    /**
                     * 设置<p>List of deployed components. Different EMR product IDs correspond to different optional component lists (ProductId: For details about its meaning, see the ProductId request parameter). For details about how to query optional component lists for different product versions, see <a href="https://www.tencentcloud.com/document/product/589/20279?from_cn_redirect=1">Component Version</a>.<br>Example values: hive and flink.</p>
                     * @param _software <p>List of deployed components. Different EMR product IDs correspond to different optional component lists (ProductId: For details about its meaning, see the ProductId request parameter). For details about how to query optional component lists for different product versions, see <a href="https://www.tencentcloud.com/document/product/589/20279?from_cn_redirect=1">Component Version</a>.<br>Example values: hive and flink.</p>
                     * 
                     */
                    void SetSoftware(const std::vector<std::string>& _software);

                    /**
                     * 判断参数 Software 是否已赋值
                     * @return Software 是否已赋值
                     * 
                     */
                    bool SoftwareHasBeenSet() const;

                    /**
                     * 获取<p>Whether to enable high availability for the node. Valid values:</p><li>0: disables high availability for the node.</li><li>1: enables high availability for the node.</li>
                     * @return SupportHA <p>Whether to enable high availability for the node. Valid values:</p><li>0: disables high availability for the node.</li><li>1: enables high availability for the node.</li>
                     * 
                     */
                    uint64_t GetSupportHA() const;

                    /**
                     * 设置<p>Whether to enable high availability for the node. Valid values:</p><li>0: disables high availability for the node.</li><li>1: enables high availability for the node.</li>
                     * @param _supportHA <p>Whether to enable high availability for the node. Valid values:</p><li>0: disables high availability for the node.</li><li>1: enables high availability for the node.</li>
                     * 
                     */
                    void SetSupportHA(const uint64_t& _supportHA);

                    /**
                     * 判断参数 SupportHA 是否已赋值
                     * @return SupportHA 是否已赋值
                     * 
                     */
                    bool SupportHAHasBeenSet() const;

                    /**
                     * 获取<p>Instance name.</p><li>The value can contain 6 to 36 characters.</li><li>Only Chinese characters, letters, digits, hyphens (-), and underscores (_) are allowed.</li>
                     * @return InstanceName <p>Instance name.</p><li>The value can contain 6 to 36 characters.</li><li>Only Chinese characters, letters, digits, hyphens (-), and underscores (_) are allowed.</li>
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置<p>Instance name.</p><li>The value can contain 6 to 36 characters.</li><li>Only Chinese characters, letters, digits, hyphens (-), and underscores (_) are allowed.</li>
                     * @param _instanceName <p>Instance name.</p><li>The value can contain 6 to 36 characters.</li><li>Only Chinese characters, letters, digits, hyphens (-), and underscores (_) are allowed.</li>
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
                     * 获取<p>Instance billing mode. Valid values:</p><li>0: pay-as-you-go</li><li>1: yearly/monthly subscription</li>
                     * @return PayMode <p>Instance billing mode. Valid values:</p><li>0: pay-as-you-go</li><li>1: yearly/monthly subscription</li>
                     * 
                     */
                    uint64_t GetPayMode() const;

                    /**
                     * 设置<p>Instance billing mode. Valid values:</p><li>0: pay-as-you-go</li><li>1: yearly/monthly subscription</li>
                     * @param _payMode <p>Instance billing mode. Valid values:</p><li>0: pay-as-you-go</li><li>1: yearly/monthly subscription</li>
                     * 
                     */
                    void SetPayMode(const uint64_t& _payMode);

                    /**
                     * 判断参数 PayMode 是否已赋值
                     * @return PayMode 是否已赋值
                     * 
                     */
                    bool PayModeHasBeenSet() const;

                    /**
                     * 获取<p>Instance purchase duration, which is used together with TimeUnit.</p><li>When TimeUnit is set to s, this parameter can only be set to 3600, indicating a pay-as-you-go instance.</li><li>When TimeUnit is set to m, the value set for this parameter indicates the subscription duration of the instance. For example, 1 indicates a one-month subscription.</li>
                     * @return TimeSpan <p>Instance purchase duration, which is used together with TimeUnit.</p><li>When TimeUnit is set to s, this parameter can only be set to 3600, indicating a pay-as-you-go instance.</li><li>When TimeUnit is set to m, the value set for this parameter indicates the subscription duration of the instance. For example, 1 indicates a one-month subscription.</li>
                     * 
                     */
                    uint64_t GetTimeSpan() const;

                    /**
                     * 设置<p>Instance purchase duration, which is used together with TimeUnit.</p><li>When TimeUnit is set to s, this parameter can only be set to 3600, indicating a pay-as-you-go instance.</li><li>When TimeUnit is set to m, the value set for this parameter indicates the subscription duration of the instance. For example, 1 indicates a one-month subscription.</li>
                     * @param _timeSpan <p>Instance purchase duration, which is used together with TimeUnit.</p><li>When TimeUnit is set to s, this parameter can only be set to 3600, indicating a pay-as-you-go instance.</li><li>When TimeUnit is set to m, the value set for this parameter indicates the subscription duration of the instance. For example, 1 indicates a one-month subscription.</li>
                     * 
                     */
                    void SetTimeSpan(const uint64_t& _timeSpan);

                    /**
                     * 判断参数 TimeSpan 是否已赋值
                     * @return TimeSpan 是否已赋值
                     * 
                     */
                    bool TimeSpanHasBeenSet() const;

                    /**
                     * 获取<p>Time unit for purchasing instances. Valid values:</p><li>s: indicates seconds. When PayMode is set to 0, TimeUnit can only be set to s.</li><li>m: indicates months. When PayMode is set to 1, TimeUnit can only be set to m.</li>
                     * @return TimeUnit <p>Time unit for purchasing instances. Valid values:</p><li>s: indicates seconds. When PayMode is set to 0, TimeUnit can only be set to s.</li><li>m: indicates months. When PayMode is set to 1, TimeUnit can only be set to m.</li>
                     * 
                     */
                    std::string GetTimeUnit() const;

                    /**
                     * 设置<p>Time unit for purchasing instances. Valid values:</p><li>s: indicates seconds. When PayMode is set to 0, TimeUnit can only be set to s.</li><li>m: indicates months. When PayMode is set to 1, TimeUnit can only be set to m.</li>
                     * @param _timeUnit <p>Time unit for purchasing instances. Valid values:</p><li>s: indicates seconds. When PayMode is set to 0, TimeUnit can only be set to s.</li><li>m: indicates months. When PayMode is set to 1, TimeUnit can only be set to m.</li>
                     * 
                     */
                    void SetTimeUnit(const std::string& _timeUnit);

                    /**
                     * 判断参数 TimeUnit 是否已赋值
                     * @return TimeUnit 是否已赋值
                     * 
                     */
                    bool TimeUnitHasBeenSet() const;

                    /**
                     * 获取<p>Instance login settings. This parameter is used to set the login method for the purchased node, either the password or key.</p><li>When a key is set, the password is only used to log in to the native WebUI shortcut entry for the component.</li><li>When no key is set, the password is used to log in to the purchased node as well as the native WebUI shortcut entry for the component.</li>
                     * @return LoginSettings <p>Instance login settings. This parameter is used to set the login method for the purchased node, either the password or key.</p><li>When a key is set, the password is only used to log in to the native WebUI shortcut entry for the component.</li><li>When no key is set, the password is used to log in to the purchased node as well as the native WebUI shortcut entry for the component.</li>
                     * 
                     */
                    LoginSettings GetLoginSettings() const;

                    /**
                     * 设置<p>Instance login settings. This parameter is used to set the login method for the purchased node, either the password or key.</p><li>When a key is set, the password is only used to log in to the native WebUI shortcut entry for the component.</li><li>When no key is set, the password is used to log in to the purchased node as well as the native WebUI shortcut entry for the component.</li>
                     * @param _loginSettings <p>Instance login settings. This parameter is used to set the login method for the purchased node, either the password or key.</p><li>When a key is set, the password is only used to log in to the native WebUI shortcut entry for the component.</li><li>When no key is set, the password is used to log in to the purchased node as well as the native WebUI shortcut entry for the component.</li>
                     * 
                     */
                    void SetLoginSettings(const LoginSettings& _loginSettings);

                    /**
                     * 判断参数 LoginSettings 是否已赋值
                     * @return LoginSettings 是否已赋值
                     * 
                     */
                    bool LoginSettingsHasBeenSet() const;

                    /**
                     * 获取<p>VPC-related information configuration. This parameter can be used to specify the VPC ID, subnet ID, and so on.</p>
                     * @return VPCSettings <p>VPC-related information configuration. This parameter can be used to specify the VPC ID, subnet ID, and so on.</p>
                     * 
                     */
                    VPCSettings GetVPCSettings() const;

                    /**
                     * 设置<p>VPC-related information configuration. This parameter can be used to specify the VPC ID, subnet ID, and so on.</p>
                     * @param _vPCSettings <p>VPC-related information configuration. This parameter can be used to specify the VPC ID, subnet ID, and so on.</p>
                     * 
                     */
                    void SetVPCSettings(const VPCSettings& _vPCSettings);

                    /**
                     * 判断参数 VPCSettings 是否已赋值
                     * @return VPCSettings 是否已赋值
                     * 
                     */
                    bool VPCSettingsHasBeenSet() const;

                    /**
                     * 获取<p>Node resource specifications.</p>
                     * @return ResourceSpec <p>Node resource specifications.</p>
                     * 
                     */
                    NewResourceSpec GetResourceSpec() const;

                    /**
                     * 设置<p>Node resource specifications.</p>
                     * @param _resourceSpec <p>Node resource specifications.</p>
                     * 
                     */
                    void SetResourceSpec(const NewResourceSpec& _resourceSpec);

                    /**
                     * 判断参数 ResourceSpec 是否已赋值
                     * @return ResourceSpec 是否已赋值
                     * 
                     */
                    bool ResourceSpecHasBeenSet() const;

                    /**
                     * 获取<p>Specifies the parameters to be set for enabling COS access.</p>
                     * @return COSSettings <p>Specifies the parameters to be set for enabling COS access.</p>
                     * 
                     */
                    COSSettings GetCOSSettings() const;

                    /**
                     * 设置<p>Specifies the parameters to be set for enabling COS access.</p>
                     * @param _cOSSettings <p>Specifies the parameters to be set for enabling COS access.</p>
                     * 
                     */
                    void SetCOSSettings(const COSSettings& _cOSSettings);

                    /**
                     * 判断参数 COSSettings 是否已赋值
                     * @return COSSettings 是否已赋值
                     * 
                     */
                    bool COSSettingsHasBeenSet() const;

                    /**
                     * 获取<p>Location of the instance. This parameter can be used to specify attributes such as the AZ and associated project of the instance.</p>
                     * @return Placement <p>Location of the instance. This parameter can be used to specify attributes such as the AZ and associated project of the instance.</p>
                     * 
                     */
                    Placement GetPlacement() const;

                    /**
                     * 设置<p>Location of the instance. This parameter can be used to specify attributes such as the AZ and associated project of the instance.</p>
                     * @param _placement <p>Location of the instance. This parameter can be used to specify attributes such as the AZ and associated project of the instance.</p>
                     * 
                     */
                    void SetPlacement(const Placement& _placement);

                    /**
                     * 判断参数 Placement 是否已赋值
                     * @return Placement 是否已赋值
                     * 
                     */
                    bool PlacementHasBeenSet() const;

                    /**
                     * 获取<p>ID of the security group to which the instance belongs, for example, sg-xxxxxxxx. This parameter can be obtained by calling the SecurityGroupId field in the response result of <a href="https://www.tencentcloud.com/document/api/215/15808?from_cn_redirect=1">DescribeSecurityGroups</a>.</p>
                     * @return SgId <p>ID of the security group to which the instance belongs, for example, sg-xxxxxxxx. This parameter can be obtained by calling the SecurityGroupId field in the response result of <a href="https://www.tencentcloud.com/document/api/215/15808?from_cn_redirect=1">DescribeSecurityGroups</a>.</p>
                     * 
                     */
                    std::string GetSgId() const;

                    /**
                     * 设置<p>ID of the security group to which the instance belongs, for example, sg-xxxxxxxx. This parameter can be obtained by calling the SecurityGroupId field in the response result of <a href="https://www.tencentcloud.com/document/api/215/15808?from_cn_redirect=1">DescribeSecurityGroups</a>.</p>
                     * @param _sgId <p>ID of the security group to which the instance belongs, for example, sg-xxxxxxxx. This parameter can be obtained by calling the SecurityGroupId field in the response result of <a href="https://www.tencentcloud.com/document/api/215/15808?from_cn_redirect=1">DescribeSecurityGroups</a>.</p>
                     * 
                     */
                    void SetSgId(const std::string& _sgId);

                    /**
                     * 判断参数 SgId 是否已赋值
                     * @return SgId 是否已赋值
                     * 
                     */
                    bool SgIdHasBeenSet() const;

                    /**
                     * 获取<p><a href="https://www.tencentcloud.com/document/product/589/35656?from_cn_redirect=1">Bootstrap operation</a> script settings.</p>
                     * @return PreExecutedFileSettings <p><a href="https://www.tencentcloud.com/document/product/589/35656?from_cn_redirect=1">Bootstrap operation</a> script settings.</p>
                     * 
                     */
                    std::vector<PreExecuteFileSettings> GetPreExecutedFileSettings() const;

                    /**
                     * 设置<p><a href="https://www.tencentcloud.com/document/product/589/35656?from_cn_redirect=1">Bootstrap operation</a> script settings.</p>
                     * @param _preExecutedFileSettings <p><a href="https://www.tencentcloud.com/document/product/589/35656?from_cn_redirect=1">Bootstrap operation</a> script settings.</p>
                     * 
                     */
                    void SetPreExecutedFileSettings(const std::vector<PreExecuteFileSettings>& _preExecutedFileSettings);

                    /**
                     * 判断参数 PreExecutedFileSettings 是否已赋值
                     * @return PreExecutedFileSettings 是否已赋值
                     * 
                     */
                    bool PreExecutedFileSettingsHasBeenSet() const;

                    /**
                     * 获取<p>Whether a yearly/monthly subscription instance is automatically renewed. Valid values:</p><li>0: no</li><li>1: yes</li>
                     * @return AutoRenew <p>Whether a yearly/monthly subscription instance is automatically renewed. Valid values:</p><li>0: no</li><li>1: yes</li>
                     * 
                     */
                    uint64_t GetAutoRenew() const;

                    /**
                     * 设置<p>Whether a yearly/monthly subscription instance is automatically renewed. Valid values:</p><li>0: no</li><li>1: yes</li>
                     * @param _autoRenew <p>Whether a yearly/monthly subscription instance is automatically renewed. Valid values:</p><li>0: no</li><li>1: yes</li>
                     * 
                     */
                    void SetAutoRenew(const uint64_t& _autoRenew);

                    /**
                     * 判断参数 AutoRenew 是否已赋值
                     * @return AutoRenew 是否已赋值
                     * 
                     */
                    bool AutoRenewHasBeenSet() const;

                    /**
                     * 获取<p>Unique random identifier, which is valid for five minutes and needs to be specified by the caller. This prevents the client from repeatedly creating resources. Example value: a9a90aa6-<strong><strong>-</strong></strong>-****-fae36063280.</p>
                     * @return ClientToken <p>Unique random identifier, which is valid for five minutes and needs to be specified by the caller. This prevents the client from repeatedly creating resources. Example value: a9a90aa6-<strong><strong>-</strong></strong>-****-fae36063280.</p>
                     * 
                     */
                    std::string GetClientToken() const;

                    /**
                     * 设置<p>Unique random identifier, which is valid for five minutes and needs to be specified by the caller. This prevents the client from repeatedly creating resources. Example value: a9a90aa6-<strong><strong>-</strong></strong>-****-fae36063280.</p>
                     * @param _clientToken <p>Unique random identifier, which is valid for five minutes and needs to be specified by the caller. This prevents the client from repeatedly creating resources. Example value: a9a90aa6-<strong><strong>-</strong></strong>-****-fae36063280.</p>
                     * 
                     */
                    void SetClientToken(const std::string& _clientToken);

                    /**
                     * 判断参数 ClientToken 是否已赋值
                     * @return ClientToken 是否已赋值
                     * 
                     */
                    bool ClientTokenHasBeenSet() const;

                    /**
                     * 获取<p>Whether to enable public network access for the cluster Master node. Valid values:</p><li>NEED_MASTER_WAN: yes</li><li>NOT_NEED_MASTER_WAN: no</li>By default, public network access is enabled for the cluster Master node.
                     * @return NeedMasterWan <p>Whether to enable public network access for the cluster Master node. Valid values:</p><li>NEED_MASTER_WAN: yes</li><li>NOT_NEED_MASTER_WAN: no</li>By default, public network access is enabled for the cluster Master node.
                     * 
                     */
                    std::string GetNeedMasterWan() const;

                    /**
                     * 设置<p>Whether to enable public network access for the cluster Master node. Valid values:</p><li>NEED_MASTER_WAN: yes</li><li>NOT_NEED_MASTER_WAN: no</li>By default, public network access is enabled for the cluster Master node.
                     * @param _needMasterWan <p>Whether to enable public network access for the cluster Master node. Valid values:</p><li>NEED_MASTER_WAN: yes</li><li>NOT_NEED_MASTER_WAN: no</li>By default, public network access is enabled for the cluster Master node.
                     * 
                     */
                    void SetNeedMasterWan(const std::string& _needMasterWan);

                    /**
                     * 判断参数 NeedMasterWan 是否已赋值
                     * @return NeedMasterWan 是否已赋值
                     * 
                     */
                    bool NeedMasterWanHasBeenSet() const;

                    /**
                     * 获取<p>Whether to enable remote public network login, that is, port 22. If SgId is passed, this parameter is invalid.</p>
                     * @return RemoteLoginAtCreate <p>Whether to enable remote public network login, that is, port 22. If SgId is passed, this parameter is invalid.</p>
                     * 
                     */
                    int64_t GetRemoteLoginAtCreate() const;

                    /**
                     * 设置<p>Whether to enable remote public network login, that is, port 22. If SgId is passed, this parameter is invalid.</p>
                     * @param _remoteLoginAtCreate <p>Whether to enable remote public network login, that is, port 22. If SgId is passed, this parameter is invalid.</p>
                     * 
                     */
                    void SetRemoteLoginAtCreate(const int64_t& _remoteLoginAtCreate);

                    /**
                     * 判断参数 RemoteLoginAtCreate 是否已赋值
                     * @return RemoteLoginAtCreate 是否已赋值
                     * 
                     */
                    bool RemoteLoginAtCreateHasBeenSet() const;

                    /**
                     * 获取<p>Whether the security cluster is enabled. Valid values: 0 (no) and values other than 0 (yes).</p>
                     * @return CheckSecurity <p>Whether the security cluster is enabled. Valid values: 0 (no) and values other than 0 (yes).</p>
                     * 
                     */
                    int64_t GetCheckSecurity() const;

                    /**
                     * 设置<p>Whether the security cluster is enabled. Valid values: 0 (no) and values other than 0 (yes).</p>
                     * @param _checkSecurity <p>Whether the security cluster is enabled. Valid values: 0 (no) and values other than 0 (yes).</p>
                     * 
                     */
                    void SetCheckSecurity(const int64_t& _checkSecurity);

                    /**
                     * 判断参数 CheckSecurity 是否已赋值
                     * @return CheckSecurity 是否已赋值
                     * 
                     */
                    bool CheckSecurityHasBeenSet() const;

                    /**
                     * 获取<p>Specifies the external file system to be accessed.</p>
                     * @return ExtendFsField <p>Specifies the external file system to be accessed.</p>
                     * 
                     */
                    std::string GetExtendFsField() const;

                    /**
                     * 设置<p>Specifies the external file system to be accessed.</p>
                     * @param _extendFsField <p>Specifies the external file system to be accessed.</p>
                     * 
                     */
                    void SetExtendFsField(const std::string& _extendFsField);

                    /**
                     * 判断参数 ExtendFsField 是否已赋值
                     * @return ExtendFsField 是否已赋值
                     * 
                     */
                    bool ExtendFsFieldHasBeenSet() const;

                    /**
                     * 获取<p>List of tag descriptions. When this parameter is specified, tags are bound to the corresponding instance.</p>
                     * @return Tags <p>List of tag descriptions. When this parameter is specified, tags are bound to the corresponding instance.</p>
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置<p>List of tag descriptions. When this parameter is specified, tags are bound to the corresponding instance.</p>
                     * @param _tags <p>List of tag descriptions. When this parameter is specified, tags are bound to the corresponding instance.</p>
                     * 
                     */
                    void SetTags(const std::vector<Tag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取<p>List of dispersed placement group IDs. Currently, only one ID can be specified.<br>This parameter can be obtained by calling the SecurityGroupId field in the response result of <a href="https://www.tencentcloud.com/document/product/213/15486?from_cn_redirect=1">DescribeSecurityGroups</a>.</p>
                     * @return DisasterRecoverGroupIds <p>List of dispersed placement group IDs. Currently, only one ID can be specified.<br>This parameter can be obtained by calling the SecurityGroupId field in the response result of <a href="https://www.tencentcloud.com/document/product/213/15486?from_cn_redirect=1">DescribeSecurityGroups</a>.</p>
                     * 
                     */
                    std::vector<std::string> GetDisasterRecoverGroupIds() const;

                    /**
                     * 设置<p>List of dispersed placement group IDs. Currently, only one ID can be specified.<br>This parameter can be obtained by calling the SecurityGroupId field in the response result of <a href="https://www.tencentcloud.com/document/product/213/15486?from_cn_redirect=1">DescribeSecurityGroups</a>.</p>
                     * @param _disasterRecoverGroupIds <p>List of dispersed placement group IDs. Currently, only one ID can be specified.<br>This parameter can be obtained by calling the SecurityGroupId field in the response result of <a href="https://www.tencentcloud.com/document/product/213/15486?from_cn_redirect=1">DescribeSecurityGroups</a>.</p>
                     * 
                     */
                    void SetDisasterRecoverGroupIds(const std::vector<std::string>& _disasterRecoverGroupIds);

                    /**
                     * 判断参数 DisasterRecoverGroupIds 是否已赋值
                     * @return DisasterRecoverGroupIds 是否已赋值
                     * 
                     */
                    bool DisasterRecoverGroupIdsHasBeenSet() const;

                    /**
                     * 获取<p>CBS encryption disk at the cluster level. Valid values: 0 (not encrypted) and 1 (encrypted). Default value: 0.</p>
                     * @return CbsEncrypt <p>CBS encryption disk at the cluster level. Valid values: 0 (not encrypted) and 1 (encrypted). Default value: 0.</p>
                     * 
                     */
                    uint64_t GetCbsEncrypt() const;

                    /**
                     * 设置<p>CBS encryption disk at the cluster level. Valid values: 0 (not encrypted) and 1 (encrypted). Default value: 0.</p>
                     * @param _cbsEncrypt <p>CBS encryption disk at the cluster level. Valid values: 0 (not encrypted) and 1 (encrypted). Default value: 0.</p>
                     * 
                     */
                    void SetCbsEncrypt(const uint64_t& _cbsEncrypt);

                    /**
                     * 判断参数 CbsEncrypt 是否已赋值
                     * @return CbsEncrypt 是否已赋值
                     * 
                     */
                    bool CbsEncryptHasBeenSet() const;

                    /**
                     * 获取<p>Hive shared metadata database type. Valid values:</p><li>EMR_DEFAULT_META: created by the cluster by default</li><li>EMR_EXIST_META: EMR-MetaDB specified by the cluster</li><li>USER_CUSTOM_META: custom MetaDB used by the cluster</li>
                     * @return MetaType <p>Hive shared metadata database type. Valid values:</p><li>EMR_DEFAULT_META: created by the cluster by default</li><li>EMR_EXIST_META: EMR-MetaDB specified by the cluster</li><li>USER_CUSTOM_META: custom MetaDB used by the cluster</li>
                     * 
                     */
                    std::string GetMetaType() const;

                    /**
                     * 设置<p>Hive shared metadata database type. Valid values:</p><li>EMR_DEFAULT_META: created by the cluster by default</li><li>EMR_EXIST_META: EMR-MetaDB specified by the cluster</li><li>USER_CUSTOM_META: custom MetaDB used by the cluster</li>
                     * @param _metaType <p>Hive shared metadata database type. Valid values:</p><li>EMR_DEFAULT_META: created by the cluster by default</li><li>EMR_EXIST_META: EMR-MetaDB specified by the cluster</li><li>USER_CUSTOM_META: custom MetaDB used by the cluster</li>
                     * 
                     */
                    void SetMetaType(const std::string& _metaType);

                    /**
                     * 判断参数 MetaType 是否已赋值
                     * @return MetaType 是否已赋值
                     * 
                     */
                    bool MetaTypeHasBeenSet() const;

                    /**
                     * 获取<p>EMR-MetaDB instance.</p>
                     * @return UnifyMetaInstanceId <p>EMR-MetaDB instance.</p>
                     * 
                     */
                    std::string GetUnifyMetaInstanceId() const;

                    /**
                     * 设置<p>EMR-MetaDB instance.</p>
                     * @param _unifyMetaInstanceId <p>EMR-MetaDB instance.</p>
                     * 
                     */
                    void SetUnifyMetaInstanceId(const std::string& _unifyMetaInstanceId);

                    /**
                     * 判断参数 UnifyMetaInstanceId 是否已赋值
                     * @return UnifyMetaInstanceId 是否已赋值
                     * 
                     */
                    bool UnifyMetaInstanceIdHasBeenSet() const;

                    /**
                     * 获取<p>Custom MetaDB information.</p>
                     * @return MetaDBInfo <p>Custom MetaDB information.</p>
                     * 
                     */
                    CustomMetaInfo GetMetaDBInfo() const;

                    /**
                     * 设置<p>Custom MetaDB information.</p>
                     * @param _metaDBInfo <p>Custom MetaDB information.</p>
                     * 
                     */
                    void SetMetaDBInfo(const CustomMetaInfo& _metaDBInfo);

                    /**
                     * 判断参数 MetaDBInfo 是否已赋值
                     * @return MetaDBInfo 是否已赋值
                     * 
                     */
                    bool MetaDBInfoHasBeenSet() const;

                    /**
                     * 获取<p>Custom application role.</p>
                     * @return ApplicationRole <p>Custom application role.</p>
                     * 
                     */
                    std::string GetApplicationRole() const;

                    /**
                     * 设置<p>Custom application role.</p>
                     * @param _applicationRole <p>Custom application role.</p>
                     * 
                     */
                    void SetApplicationRole(const std::string& _applicationRole);

                    /**
                     * 判断参数 ApplicationRole 是否已赋值
                     * @return ApplicationRole 是否已赋值
                     * 
                     */
                    bool ApplicationRoleHasBeenSet() const;

                    /**
                     * 获取<p>Scenario-based values:<br>Hadoop-Kudu<br>Hadoop-Zookeeper<br>Hadoop-Presto<br>Hadoop-Hbase</p>
                     * @return SceneName <p>Scenario-based values:<br>Hadoop-Kudu<br>Hadoop-Zookeeper<br>Hadoop-Presto<br>Hadoop-Hbase</p>
                     * 
                     */
                    std::string GetSceneName() const;

                    /**
                     * 设置<p>Scenario-based values:<br>Hadoop-Kudu<br>Hadoop-Zookeeper<br>Hadoop-Presto<br>Hadoop-Hbase</p>
                     * @param _sceneName <p>Scenario-based values:<br>Hadoop-Kudu<br>Hadoop-Zookeeper<br>Hadoop-Presto<br>Hadoop-Hbase</p>
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
                     * 获取<p>Shared component information.</p>
                     * @return ExternalService <p>Shared component information.</p>
                     * 
                     */
                    std::vector<ExternalService> GetExternalService() const;

                    /**
                     * 设置<p>Shared component information.</p>
                     * @param _externalService <p>Shared component information.</p>
                     * 
                     */
                    void SetExternalService(const std::vector<ExternalService>& _externalService);

                    /**
                     * 判断参数 ExternalService 是否已赋值
                     * @return ExternalService 是否已赋值
                     * 
                     */
                    bool ExternalServiceHasBeenSet() const;

                    /**
                     * 获取<p>If this parameter is set to 0, MultiZone, MultiDeployStrategy, and MultiZoneSettings are disabled. If this parameter is set to 1, ResourceSpec is deprecated and MultiZoneSettings is used.</p>
                     * @return VersionID <p>If this parameter is set to 0, MultiZone, MultiDeployStrategy, and MultiZoneSettings are disabled. If this parameter is set to 1, ResourceSpec is deprecated and MultiZoneSettings is used.</p>
                     * 
                     */
                    int64_t GetVersionID() const;

                    /**
                     * 设置<p>If this parameter is set to 0, MultiZone, MultiDeployStrategy, and MultiZoneSettings are disabled. If this parameter is set to 1, ResourceSpec is deprecated and MultiZoneSettings is used.</p>
                     * @param _versionID <p>If this parameter is set to 0, MultiZone, MultiDeployStrategy, and MultiZoneSettings are disabled. If this parameter is set to 1, ResourceSpec is deprecated and MultiZoneSettings is used.</p>
                     * 
                     */
                    void SetVersionID(const int64_t& _versionID);

                    /**
                     * 判断参数 VersionID 是否已赋值
                     * @return VersionID 是否已赋值
                     * 
                     */
                    bool VersionIDHasBeenSet() const;

                    /**
                     * 获取<p>true: indicates that cross-AZ deployment is enabled. It is only a user parameter for cluster creation and cannot be adjusted subsequently.</p>
                     * @return MultiZone <p>true: indicates that cross-AZ deployment is enabled. It is only a user parameter for cluster creation and cannot be adjusted subsequently.</p>
                     * 
                     */
                    bool GetMultiZone() const;

                    /**
                     * 设置<p>true: indicates that cross-AZ deployment is enabled. It is only a user parameter for cluster creation and cannot be adjusted subsequently.</p>
                     * @param _multiZone <p>true: indicates that cross-AZ deployment is enabled. It is only a user parameter for cluster creation and cannot be adjusted subsequently.</p>
                     * 
                     */
                    void SetMultiZone(const bool& _multiZone);

                    /**
                     * 判断参数 MultiZone 是否已赋值
                     * @return MultiZone 是否已赋值
                     * 
                     */
                    bool MultiZoneHasBeenSet() const;

                    /**
                     * 获取<p>Specifications of node resources. Set one for each AZ. The first is the primary AZ, the second is the secondary AZ, and the third is the arbitration AZ. If cross-AZ is disabled, the length only needs to be 1.</p>
                     * @return MultiZoneSettings <p>Specifications of node resources. Set one for each AZ. The first is the primary AZ, the second is the secondary AZ, and the third is the arbitration AZ. If cross-AZ is disabled, the length only needs to be 1.</p>
                     * 
                     */
                    std::vector<MultiZoneSetting> GetMultiZoneSettings() const;

                    /**
                     * 设置<p>Specifications of node resources. Set one for each AZ. The first is the primary AZ, the second is the secondary AZ, and the third is the arbitration AZ. If cross-AZ is disabled, the length only needs to be 1.</p>
                     * @param _multiZoneSettings <p>Specifications of node resources. Set one for each AZ. The first is the primary AZ, the second is the secondary AZ, and the third is the arbitration AZ. If cross-AZ is disabled, the length only needs to be 1.</p>
                     * 
                     */
                    void SetMultiZoneSettings(const std::vector<MultiZoneSetting>& _multiZoneSettings);

                    /**
                     * 判断参数 MultiZoneSettings 是否已赋值
                     * @return MultiZoneSettings 是否已赋值
                     * 
                     */
                    bool MultiZoneSettingsHasBeenSet() const;

                    /**
                     * 获取<p>COS bucket path, which is used when a StarRocks compute-storage separation cluster is created.</p>
                     * @return CosBucket <p>COS bucket path, which is used when a StarRocks compute-storage separation cluster is created.</p>
                     * 
                     */
                    std::string GetCosBucket() const;

                    /**
                     * 设置<p>COS bucket path, which is used when a StarRocks compute-storage separation cluster is created.</p>
                     * @param _cosBucket <p>COS bucket path, which is used when a StarRocks compute-storage separation cluster is created.</p>
                     * 
                     */
                    void SetCosBucket(const std::string& _cosBucket);

                    /**
                     * 判断参数 CosBucket 是否已赋值
                     * @return CosBucket 是否已赋值
                     * 
                     */
                    bool CosBucketHasBeenSet() const;

                    /**
                     * 获取<p>Node flag information, which is currently only provided for the Terraform platform.</p>
                     * @return NodeMarks <p>Node flag information, which is currently only provided for the Terraform platform.</p>
                     * 
                     */
                    std::vector<NodeMark> GetNodeMarks() const;

                    /**
                     * 设置<p>Node flag information, which is currently only provided for the Terraform platform.</p>
                     * @param _nodeMarks <p>Node flag information, which is currently only provided for the Terraform platform.</p>
                     * 
                     */
                    void SetNodeMarks(const std::vector<NodeMark>& _nodeMarks);

                    /**
                     * 判断参数 NodeMarks 是否已赋值
                     * @return NodeMarks 是否已赋值
                     * 
                     */
                    bool NodeMarksHasBeenSet() const;

                    /**
                     * 获取<p>CLB id</p>
                     * @return LoadBalancerId <p>CLB id</p>
                     * 
                     */
                    std::string GetLoadBalancerId() const;

                    /**
                     * 设置<p>CLB id</p>
                     * @param _loadBalancerId <p>CLB id</p>
                     * 
                     */
                    void SetLoadBalancerId(const std::string& _loadBalancerId);

                    /**
                     * 判断参数 LoadBalancerId 是否已赋值
                     * @return LoadBalancerId 是否已赋值
                     * 
                     */
                    bool LoadBalancerIdHasBeenSet() const;

                    /**
                     * 获取<p>Database type. Valid values: mysql8/tdsql8.</p>
                     * @return DefaultMetaVersion <p>Database type. Valid values: mysql8/tdsql8.</p>
                     * 
                     */
                    std::string GetDefaultMetaVersion() const;

                    /**
                     * 设置<p>Database type. Valid values: mysql8/tdsql8.</p>
                     * @param _defaultMetaVersion <p>Database type. Valid values: mysql8/tdsql8.</p>
                     * 
                     */
                    void SetDefaultMetaVersion(const std::string& _defaultMetaVersion);

                    /**
                     * 判断参数 DefaultMetaVersion 是否已赋值
                     * @return DefaultMetaVersion 是否已赋值
                     * 
                     */
                    bool DefaultMetaVersionHasBeenSet() const;

                    /**
                     * 获取<p>Whether to enable audit. Valid values: 0 (no) and 1 (yes).</p>
                     * @return NeedCdbAudit <p>Whether to enable audit. Valid values: 0 (no) and 1 (yes).</p>
                     * 
                     */
                    int64_t GetNeedCdbAudit() const;

                    /**
                     * 设置<p>Whether to enable audit. Valid values: 0 (no) and 1 (yes).</p>
                     * @param _needCdbAudit <p>Whether to enable audit. Valid values: 0 (no) and 1 (yes).</p>
                     * 
                     */
                    void SetNeedCdbAudit(const int64_t& _needCdbAudit);

                    /**
                     * 判断参数 NeedCdbAudit 是否已赋值
                     * @return NeedCdbAudit 是否已赋值
                     * 
                     */
                    bool NeedCdbAuditHasBeenSet() const;

                    /**
                     * 获取<p>Source IP address, which is specified in the security group.</p>
                     * @return SgIP <p>Source IP address, which is specified in the security group.</p>
                     * 
                     */
                    std::string GetSgIP() const;

                    /**
                     * 设置<p>Source IP address, which is specified in the security group.</p>
                     * @param _sgIP <p>Source IP address, which is specified in the security group.</p>
                     * 
                     */
                    void SetSgIP(const std::string& _sgIP);

                    /**
                     * 判断参数 SgIP 是否已赋值
                     * @return SgIP 是否已赋值
                     * 
                     */
                    bool SgIPHasBeenSet() const;

                    /**
                     * 获取<p>Partition of a partition placement group.</p>
                     * @return PartitionNumber <p>Partition of a partition placement group.</p>
                     * 
                     */
                    int64_t GetPartitionNumber() const;

                    /**
                     * 设置<p>Partition of a partition placement group.</p>
                     * @param _partitionNumber <p>Partition of a partition placement group.</p>
                     * 
                     */
                    void SetPartitionNumber(const int64_t& _partitionNumber);

                    /**
                     * 判断参数 PartitionNumber 是否已赋值
                     * @return PartitionNumber 是否已赋值
                     * 
                     */
                    bool PartitionNumberHasBeenSet() const;

                    /**
                     * 获取<p>Service UI address.</p><p>Enumeration values:</p><ul><li>0: Service UI address. Only one service UI address is returned.</li><li>1: Service UI address. If the service has multiple UI addresses, all results are returned, such as Impalad, StateStore, and Catalogd of Impala.</li></ul><p>Default value: 0.</p>
                     * @return WebUiVersion <p>Service UI address.</p><p>Enumeration values:</p><ul><li>0: Service UI address. Only one service UI address is returned.</li><li>1: Service UI address. If the service has multiple UI addresses, all results are returned, such as Impalad, StateStore, and Catalogd of Impala.</li></ul><p>Default value: 0.</p>
                     * 
                     */
                    int64_t GetWebUiVersion() const;

                    /**
                     * 设置<p>Service UI address.</p><p>Enumeration values:</p><ul><li>0: Service UI address. Only one service UI address is returned.</li><li>1: Service UI address. If the service has multiple UI addresses, all results are returned, such as Impalad, StateStore, and Catalogd of Impala.</li></ul><p>Default value: 0.</p>
                     * @param _webUiVersion <p>Service UI address.</p><p>Enumeration values:</p><ul><li>0: Service UI address. Only one service UI address is returned.</li><li>1: Service UI address. If the service has multiple UI addresses, all results are returned, such as Impalad, StateStore, and Catalogd of Impala.</li></ul><p>Default value: 0.</p>
                     * 
                     */
                    void SetWebUiVersion(const int64_t& _webUiVersion);

                    /**
                     * 判断参数 WebUiVersion 是否已赋值
                     * @return WebUiVersion 是否已赋值
                     * 
                     */
                    bool WebUiVersionHasBeenSet() const;

                    /**
                     * 获取<p>Whether to enable cluster-level CBS system disk encryption. Valid values: 0 (no) and 1 (yes).</p>
                     * @return CbsSysEncrypt <p>Whether to enable cluster-level CBS system disk encryption. Valid values: 0 (no) and 1 (yes).</p>
                     * 
                     */
                    int64_t GetCbsSysEncrypt() const;

                    /**
                     * 设置<p>Whether to enable cluster-level CBS system disk encryption. Valid values: 0 (no) and 1 (yes).</p>
                     * @param _cbsSysEncrypt <p>Whether to enable cluster-level CBS system disk encryption. Valid values: 0 (no) and 1 (yes).</p>
                     * 
                     */
                    void SetCbsSysEncrypt(const int64_t& _cbsSysEncrypt);

                    /**
                     * 判断参数 CbsSysEncrypt 是否已赋值
                     * @return CbsSysEncrypt 是否已赋值
                     * 
                     */
                    bool CbsSysEncryptHasBeenSet() const;

                private:

                    /**
                     * <p>Product ID. Different product IDs indicate different EMR product versions. Valid values:<br>51: STARROCKS-V1.4.0<br>54: STARROCKS-V2.0.0<br>27: KAFKA-V1.0.0<br>50: KAFKA-V2.0.0<br>16: EMR-V2.3.0<br>20: EMR-V2.5.0<br>30: EMR-V2.6.0<br>38: EMR-V2.7.0<br>25: EMR-V3.1.0<br>33: EMR-V3.2.1<br>34: EMR-V3.3.0<br>37: EMR-V3.4.0<br>44: EMR-V3.5.0<br>53: EMR-V3.6.0<br>58: EMR-3.6.1<br>59: EMR-serverless-1.0.0<br>60: EMR-TKE-1.1.0<br>61: SR-V2.1.0<br>62: SR-V2.1.0-SharedData<br>63: SR-V2.1.0.tlinux<br>64: unified metadata management project<br>65: EMR-TKE-AI-1.0.0<br>66: RSS-1.0.0<br>67: SR-V2.2.0<br>68: SR-V2.2.0.tlinux<br>69: EMR-AI-1.1.0<br>70: SR-V2.2.1<br>71: EMR-3.7.0<br>72: EMR-serverless-1.0.1<br>73: KAFKA-2.0.1<br>74: SR-V2.2.2<br>75: EMR-TKE-AI-1.1.0<br>76: EMR-V3.7.1<br>77: SERVERLESS-TCBASE-1.0.0<br>78: EMR-V3.6.2<br>79: STARROCKS-V2.2.2<br>80: EMR-AI-V1.1.1</p>
                     */
                    uint64_t m_productId;
                    bool m_productIdHasBeenSet;

                    /**
                     * <p>List of deployed components. Different EMR product IDs correspond to different optional component lists (ProductId: For details about its meaning, see the ProductId request parameter). For details about how to query optional component lists for different product versions, see <a href="https://www.tencentcloud.com/document/product/589/20279?from_cn_redirect=1">Component Version</a>.<br>Example values: hive and flink.</p>
                     */
                    std::vector<std::string> m_software;
                    bool m_softwareHasBeenSet;

                    /**
                     * <p>Whether to enable high availability for the node. Valid values:</p><li>0: disables high availability for the node.</li><li>1: enables high availability for the node.</li>
                     */
                    uint64_t m_supportHA;
                    bool m_supportHAHasBeenSet;

                    /**
                     * <p>Instance name.</p><li>The value can contain 6 to 36 characters.</li><li>Only Chinese characters, letters, digits, hyphens (-), and underscores (_) are allowed.</li>
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * <p>Instance billing mode. Valid values:</p><li>0: pay-as-you-go</li><li>1: yearly/monthly subscription</li>
                     */
                    uint64_t m_payMode;
                    bool m_payModeHasBeenSet;

                    /**
                     * <p>Instance purchase duration, which is used together with TimeUnit.</p><li>When TimeUnit is set to s, this parameter can only be set to 3600, indicating a pay-as-you-go instance.</li><li>When TimeUnit is set to m, the value set for this parameter indicates the subscription duration of the instance. For example, 1 indicates a one-month subscription.</li>
                     */
                    uint64_t m_timeSpan;
                    bool m_timeSpanHasBeenSet;

                    /**
                     * <p>Time unit for purchasing instances. Valid values:</p><li>s: indicates seconds. When PayMode is set to 0, TimeUnit can only be set to s.</li><li>m: indicates months. When PayMode is set to 1, TimeUnit can only be set to m.</li>
                     */
                    std::string m_timeUnit;
                    bool m_timeUnitHasBeenSet;

                    /**
                     * <p>Instance login settings. This parameter is used to set the login method for the purchased node, either the password or key.</p><li>When a key is set, the password is only used to log in to the native WebUI shortcut entry for the component.</li><li>When no key is set, the password is used to log in to the purchased node as well as the native WebUI shortcut entry for the component.</li>
                     */
                    LoginSettings m_loginSettings;
                    bool m_loginSettingsHasBeenSet;

                    /**
                     * <p>VPC-related information configuration. This parameter can be used to specify the VPC ID, subnet ID, and so on.</p>
                     */
                    VPCSettings m_vPCSettings;
                    bool m_vPCSettingsHasBeenSet;

                    /**
                     * <p>Node resource specifications.</p>
                     */
                    NewResourceSpec m_resourceSpec;
                    bool m_resourceSpecHasBeenSet;

                    /**
                     * <p>Specifies the parameters to be set for enabling COS access.</p>
                     */
                    COSSettings m_cOSSettings;
                    bool m_cOSSettingsHasBeenSet;

                    /**
                     * <p>Location of the instance. This parameter can be used to specify attributes such as the AZ and associated project of the instance.</p>
                     */
                    Placement m_placement;
                    bool m_placementHasBeenSet;

                    /**
                     * <p>ID of the security group to which the instance belongs, for example, sg-xxxxxxxx. This parameter can be obtained by calling the SecurityGroupId field in the response result of <a href="https://www.tencentcloud.com/document/api/215/15808?from_cn_redirect=1">DescribeSecurityGroups</a>.</p>
                     */
                    std::string m_sgId;
                    bool m_sgIdHasBeenSet;

                    /**
                     * <p><a href="https://www.tencentcloud.com/document/product/589/35656?from_cn_redirect=1">Bootstrap operation</a> script settings.</p>
                     */
                    std::vector<PreExecuteFileSettings> m_preExecutedFileSettings;
                    bool m_preExecutedFileSettingsHasBeenSet;

                    /**
                     * <p>Whether a yearly/monthly subscription instance is automatically renewed. Valid values:</p><li>0: no</li><li>1: yes</li>
                     */
                    uint64_t m_autoRenew;
                    bool m_autoRenewHasBeenSet;

                    /**
                     * <p>Unique random identifier, which is valid for five minutes and needs to be specified by the caller. This prevents the client from repeatedly creating resources. Example value: a9a90aa6-<strong><strong>-</strong></strong>-****-fae36063280.</p>
                     */
                    std::string m_clientToken;
                    bool m_clientTokenHasBeenSet;

                    /**
                     * <p>Whether to enable public network access for the cluster Master node. Valid values:</p><li>NEED_MASTER_WAN: yes</li><li>NOT_NEED_MASTER_WAN: no</li>By default, public network access is enabled for the cluster Master node.
                     */
                    std::string m_needMasterWan;
                    bool m_needMasterWanHasBeenSet;

                    /**
                     * <p>Whether to enable remote public network login, that is, port 22. If SgId is passed, this parameter is invalid.</p>
                     */
                    int64_t m_remoteLoginAtCreate;
                    bool m_remoteLoginAtCreateHasBeenSet;

                    /**
                     * <p>Whether the security cluster is enabled. Valid values: 0 (no) and values other than 0 (yes).</p>
                     */
                    int64_t m_checkSecurity;
                    bool m_checkSecurityHasBeenSet;

                    /**
                     * <p>Specifies the external file system to be accessed.</p>
                     */
                    std::string m_extendFsField;
                    bool m_extendFsFieldHasBeenSet;

                    /**
                     * <p>List of tag descriptions. When this parameter is specified, tags are bound to the corresponding instance.</p>
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * <p>List of dispersed placement group IDs. Currently, only one ID can be specified.<br>This parameter can be obtained by calling the SecurityGroupId field in the response result of <a href="https://www.tencentcloud.com/document/product/213/15486?from_cn_redirect=1">DescribeSecurityGroups</a>.</p>
                     */
                    std::vector<std::string> m_disasterRecoverGroupIds;
                    bool m_disasterRecoverGroupIdsHasBeenSet;

                    /**
                     * <p>CBS encryption disk at the cluster level. Valid values: 0 (not encrypted) and 1 (encrypted). Default value: 0.</p>
                     */
                    uint64_t m_cbsEncrypt;
                    bool m_cbsEncryptHasBeenSet;

                    /**
                     * <p>Hive shared metadata database type. Valid values:</p><li>EMR_DEFAULT_META: created by the cluster by default</li><li>EMR_EXIST_META: EMR-MetaDB specified by the cluster</li><li>USER_CUSTOM_META: custom MetaDB used by the cluster</li>
                     */
                    std::string m_metaType;
                    bool m_metaTypeHasBeenSet;

                    /**
                     * <p>EMR-MetaDB instance.</p>
                     */
                    std::string m_unifyMetaInstanceId;
                    bool m_unifyMetaInstanceIdHasBeenSet;

                    /**
                     * <p>Custom MetaDB information.</p>
                     */
                    CustomMetaInfo m_metaDBInfo;
                    bool m_metaDBInfoHasBeenSet;

                    /**
                     * <p>Custom application role.</p>
                     */
                    std::string m_applicationRole;
                    bool m_applicationRoleHasBeenSet;

                    /**
                     * <p>Scenario-based values:<br>Hadoop-Kudu<br>Hadoop-Zookeeper<br>Hadoop-Presto<br>Hadoop-Hbase</p>
                     */
                    std::string m_sceneName;
                    bool m_sceneNameHasBeenSet;

                    /**
                     * <p>Shared component information.</p>
                     */
                    std::vector<ExternalService> m_externalService;
                    bool m_externalServiceHasBeenSet;

                    /**
                     * <p>If this parameter is set to 0, MultiZone, MultiDeployStrategy, and MultiZoneSettings are disabled. If this parameter is set to 1, ResourceSpec is deprecated and MultiZoneSettings is used.</p>
                     */
                    int64_t m_versionID;
                    bool m_versionIDHasBeenSet;

                    /**
                     * <p>true: indicates that cross-AZ deployment is enabled. It is only a user parameter for cluster creation and cannot be adjusted subsequently.</p>
                     */
                    bool m_multiZone;
                    bool m_multiZoneHasBeenSet;

                    /**
                     * <p>Specifications of node resources. Set one for each AZ. The first is the primary AZ, the second is the secondary AZ, and the third is the arbitration AZ. If cross-AZ is disabled, the length only needs to be 1.</p>
                     */
                    std::vector<MultiZoneSetting> m_multiZoneSettings;
                    bool m_multiZoneSettingsHasBeenSet;

                    /**
                     * <p>COS bucket path, which is used when a StarRocks compute-storage separation cluster is created.</p>
                     */
                    std::string m_cosBucket;
                    bool m_cosBucketHasBeenSet;

                    /**
                     * <p>Node flag information, which is currently only provided for the Terraform platform.</p>
                     */
                    std::vector<NodeMark> m_nodeMarks;
                    bool m_nodeMarksHasBeenSet;

                    /**
                     * <p>CLB id</p>
                     */
                    std::string m_loadBalancerId;
                    bool m_loadBalancerIdHasBeenSet;

                    /**
                     * <p>Database type. Valid values: mysql8/tdsql8.</p>
                     */
                    std::string m_defaultMetaVersion;
                    bool m_defaultMetaVersionHasBeenSet;

                    /**
                     * <p>Whether to enable audit. Valid values: 0 (no) and 1 (yes).</p>
                     */
                    int64_t m_needCdbAudit;
                    bool m_needCdbAuditHasBeenSet;

                    /**
                     * <p>Source IP address, which is specified in the security group.</p>
                     */
                    std::string m_sgIP;
                    bool m_sgIPHasBeenSet;

                    /**
                     * <p>Partition of a partition placement group.</p>
                     */
                    int64_t m_partitionNumber;
                    bool m_partitionNumberHasBeenSet;

                    /**
                     * <p>Service UI address.</p><p>Enumeration values:</p><ul><li>0: Service UI address. Only one service UI address is returned.</li><li>1: Service UI address. If the service has multiple UI addresses, all results are returned, such as Impalad, StateStore, and Catalogd of Impala.</li></ul><p>Default value: 0.</p>
                     */
                    int64_t m_webUiVersion;
                    bool m_webUiVersionHasBeenSet;

                    /**
                     * <p>Whether to enable cluster-level CBS system disk encryption. Valid values: 0 (no) and 1 (yes).</p>
                     */
                    int64_t m_cbsSysEncrypt;
                    bool m_cbsSysEncryptHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_CREATEINSTANCEREQUEST_H_
