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

#ifndef TENCENTCLOUD_SCF_V20180416_MODEL_LAYERVERSIONINFO_H_
#define TENCENTCLOUD_SCF_V20180416_MODEL_LAYERVERSIONINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Scf
    {
        namespace V20180416
        {
            namespace Model
            {
                /**
                * Layer version information
                */
                class LayerVersionInfo : public AbstractModel
                {
                public:
                    LayerVersionInfo();
                    ~LayerVersionInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Runtime applicable to a version
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CompatibleRuntimes Runtime applicable to a version
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> GetCompatibleRuntimes() const;

                    /**
                     * 设置Runtime applicable to a version
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param CompatibleRuntimes Runtime applicable to a version
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetCompatibleRuntimes(const std::vector<std::string>& _compatibleRuntimes);

                    /**
                     * 判断参数 CompatibleRuntimes 是否已赋值
                     * @return CompatibleRuntimes 是否已赋值
                     */
                    bool CompatibleRuntimesHasBeenSet() const;

                    /**
                     * 获取Creation time
                     * @return AddTime Creation time
                     */
                    std::string GetAddTime() const;

                    /**
                     * 设置Creation time
                     * @param AddTime Creation time
                     */
                    void SetAddTime(const std::string& _addTime);

                    /**
                     * 判断参数 AddTime 是否已赋值
                     * @return AddTime 是否已赋值
                     */
                    bool AddTimeHasBeenSet() const;

                    /**
                     * 获取Version description
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Description Version description
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Version description
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param Description Version description
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取License information
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return LicenseInfo License information
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetLicenseInfo() const;

                    /**
                     * 设置License information
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param LicenseInfo License information
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetLicenseInfo(const std::string& _licenseInfo);

                    /**
                     * 判断参数 LicenseInfo 是否已赋值
                     * @return LicenseInfo 是否已赋值
                     */
                    bool LicenseInfoHasBeenSet() const;

                    /**
                     * 获取Version number
                     * @return LayerVersion Version number
                     */
                    int64_t GetLayerVersion() const;

                    /**
                     * 设置Version number
                     * @param LayerVersion Version number
                     */
                    void SetLayerVersion(const int64_t& _layerVersion);

                    /**
                     * 判断参数 LayerVersion 是否已赋值
                     * @return LayerVersion 是否已赋值
                     */
                    bool LayerVersionHasBeenSet() const;

                    /**
                     * 获取Layer name
                     * @return LayerName Layer name
                     */
                    std::string GetLayerName() const;

                    /**
                     * 设置Layer name
                     * @param LayerName Layer name
                     */
                    void SetLayerName(const std::string& _layerName);

                    /**
                     * 判断参数 LayerName 是否已赋值
                     * @return LayerName 是否已赋值
                     */
                    bool LayerNameHasBeenSet() const;

                    /**
                     * 获取Current status of specific layer version. For valid values, please see [here](https://intl.cloud.tencent.com/document/product/583/47175?from_cn_redirect=1#.E5.B1.82.EF.BC.88layer.EF.BC.89.E7.8A.B6.E6.80.81)
                     * @return Status Current status of specific layer version. For valid values, please see [here](https://intl.cloud.tencent.com/document/product/583/47175?from_cn_redirect=1#.E5.B1.82.EF.BC.88layer.EF.BC.89.E7.8A.B6.E6.80.81)
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Current status of specific layer version. For valid values, please see [here](https://intl.cloud.tencent.com/document/product/583/47175?from_cn_redirect=1#.E5.B1.82.EF.BC.88layer.EF.BC.89.E7.8A.B6.E6.80.81)
                     * @param Status Current status of specific layer version. For valid values, please see [here](https://intl.cloud.tencent.com/document/product/583/47175?from_cn_redirect=1#.E5.B1.82.EF.BC.88layer.EF.BC.89.E7.8A.B6.E6.80.81)
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Stamp
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Stamp Stamp
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetStamp() const;

                    /**
                     * 设置Stamp
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param Stamp Stamp
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetStamp(const std::string& _stamp);

                    /**
                     * 判断参数 Stamp 是否已赋值
                     * @return Stamp 是否已赋值
                     */
                    bool StampHasBeenSet() const;

                private:

                    /**
                     * Runtime applicable to a version
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_compatibleRuntimes;
                    bool m_compatibleRuntimesHasBeenSet;

                    /**
                     * Creation time
                     */
                    std::string m_addTime;
                    bool m_addTimeHasBeenSet;

                    /**
                     * Version description
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * License information
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_licenseInfo;
                    bool m_licenseInfoHasBeenSet;

                    /**
                     * Version number
                     */
                    int64_t m_layerVersion;
                    bool m_layerVersionHasBeenSet;

                    /**
                     * Layer name
                     */
                    std::string m_layerName;
                    bool m_layerNameHasBeenSet;

                    /**
                     * Current status of specific layer version. For valid values, please see [here](https://intl.cloud.tencent.com/document/product/583/47175?from_cn_redirect=1#.E5.B1.82.EF.BC.88layer.EF.BC.89.E7.8A.B6.E6.80.81)
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Stamp
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_stamp;
                    bool m_stampHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SCF_V20180416_MODEL_LAYERVERSIONINFO_H_
