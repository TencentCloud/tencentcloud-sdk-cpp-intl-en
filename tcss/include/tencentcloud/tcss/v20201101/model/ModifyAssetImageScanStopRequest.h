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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_MODIFYASSETIMAGESCANSTOPREQUEST_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_MODIFYASSETIMAGESCANSTOPREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcss/v20201101/model/AssetFilters.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * ModifyAssetImageScanStop request structure.
                */
                class ModifyAssetImageScanStopRequest : public AbstractModel
                {
                public:
                    ModifyAssetImageScanStopRequest();
                    ~ModifyAssetImageScanStopRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Task ID
                     * @return TaskID Task ID
                     * 
                     */
                    std::string GetTaskID() const;

                    /**
                     * 设置Task ID
                     * @param _taskID Task ID
                     * 
                     */
                    void SetTaskID(const std::string& _taskID);

                    /**
                     * 判断参数 TaskID 是否已赋值
                     * @return TaskID 是否已赋值
                     * 
                     */
                    bool TaskIDHasBeenSet() const;

                    /**
                     * 获取Image ID
                     * @return Images Image ID
                     * 
                     */
                    std::vector<std::string> GetImages() const;

                    /**
                     * 设置Image ID
                     * @param _images Image ID
                     * 
                     */
                    void SetImages(const std::vector<std::string>& _images);

                    /**
                     * 判断参数 Images 是否已赋值
                     * @return Images 是否已赋值
                     * 
                     */
                    bool ImagesHasBeenSet() const;

                    /**
                     * 获取Filter
                     * @return Filters Filter
                     * 
                     */
                    std::vector<AssetFilters> GetFilters() const;

                    /**
                     * 设置Filter
                     * @param _filters Filter
                     * 
                     */
                    void SetFilters(const std::vector<AssetFilters>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取Specified image IDs to be excluded
                     * @return ExcludeImageIds Specified image IDs to be excluded
                     * 
                     */
                    std::string GetExcludeImageIds() const;

                    /**
                     * 设置Specified image IDs to be excluded
                     * @param _excludeImageIds Specified image IDs to be excluded
                     * 
                     */
                    void SetExcludeImageIds(const std::string& _excludeImageIds);

                    /**
                     * 判断参数 ExcludeImageIds 是否已赋值
                     * @return ExcludeImageIds 是否已赋值
                     * 
                     */
                    bool ExcludeImageIdsHasBeenSet() const;

                private:

                    /**
                     * Task ID
                     */
                    std::string m_taskID;
                    bool m_taskIDHasBeenSet;

                    /**
                     * Image ID
                     */
                    std::vector<std::string> m_images;
                    bool m_imagesHasBeenSet;

                    /**
                     * Filter
                     */
                    std::vector<AssetFilters> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * Specified image IDs to be excluded
                     */
                    std::string m_excludeImageIds;
                    bool m_excludeImageIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_MODIFYASSETIMAGESCANSTOPREQUEST_H_
